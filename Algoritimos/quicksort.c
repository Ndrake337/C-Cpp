#include<stdio.h>
#include<stdlib.h>


//obs: P = v[0] R = v[n]
void troca(int v[], int i, int j)
{
    int temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}



int particao(int p , int r, int v[])
{
    int i = p+1;
    int j = r;
    int c = v[p];

    while (i <= j)
    {
        if(c >= v[i] )
            i++;
        else if(c < v[j])
            j--;
        else
        {
            troca(v,i,j);
            i++;
            j++;
        }
    }
    troca(v, j, p);
    return j;
}

void quicksort(int p, int r, int v[])
{
    if(p<r){
        int q = particao(p,r,v);
        quicksort(p,q-1,v);
        quicksort(q+1,r,v);
    }
}

void lerVetor(int v[], int n)
{
    for(int i = 0; i < n ; i++)
        printf("\t%d\t|",v[i]);
}

int main()
{
    int vetor[9] = {9,15,5,12,10,8,7,1,4};
    quicksort(0,8,vetor);
    lerVetor(vetor, 9);
}