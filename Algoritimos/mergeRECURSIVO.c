#include <stdio.h>
#include <stdlib.h>

void merge(int v[], int p,int q, int n)
{
    int *temp = (int *) calloc(n-p, sizeof(int));
    int i = p;//i = contador do vetor (p ate q-1);
    int j = q;//j = contador do vetor de (q ate n-q)
    int k = 0;//k = contador do vetor auxiliar
    while(i < q && j < n)
    {       //SOMAR SE O VETOR V[I] SE ELE FOR MENOR QUE V[J]
        if(v[i]<=v[j])
            temp[k++] = v[i++]; 
        else //SOMAR SE O VETOR V[J] SE ELE FOR MENOR QUE V[I]
            temp[k++] = v[j++];
    }
    //PEGAR O RESTO DA PARTE ESQUERDA DO VETOR
    while( i < q )
        temp[k++] = v[i++];
    //PEGAR O RESTO DA PARTE DIREITA DO VETOR
    while( j < n )
        temp[k++] = v[j++];

    for(k = 0, i = p; i < n ; i ++, k++)
        v[i] = temp[k];

    free(temp);
}

void mergeSort(int p, int n,int v[])
{
    if(p < n-1)
    {
        int q = (p + n)/2;
        while
        mergeSort(p, q, v);
        mergeSort(q, n, v);
        merge(v, p, q, n);
    }
}

void mostra_vetor(int v[],int n)
{
    for(int i = 0; i < n;i++)
    {
        printf("\t%d\t|", v[i]);
    }
}

int main()
{
    int v[9]= {3,5,5,7,9,1,2,4,6};

    merge(v, 0 ,5 ,9);
    mostra_vetor(v, 9);
}