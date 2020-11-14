#include<stdio.h>
#include<stdlib.h>

//CODIGO FEITO POR ERIC KEI SASAKI WATANABE

void mergeSort(int v[], int n)
{
    int *temp = (int *) calloc(n, sizeof(int));

	int i, j, k, m;
    int r1, t1, r2, t2;


	for(int m = 1; m < n; m *=2 )
	{
		r1=0;
		k=0;
		while( r1+m < n)
		{
			t1=r1+m-1;
			r2=t1+1;
			t2=r2+m-1;
			if( t2>=n ) 
			    t2=n-1;

			i=r1;
			j=r2;
			//COLOCANDO CADA VALOR DE CADA "MONTE" PARA SUA DEVIDA ORDEM
			while(i<=t1 && j<=t2 )
			{
				if( v[i] <= v[j] )
					temp[k++]=v[i++];
				else
					temp[k++]=v[j++];
			}

			//ATRIBUIR VALORES RESTANTES
			while(i<=t1)
				temp[k++]=v[i++];
			while(j<=t2)
				temp[k++]=v[j++];

			r1=t2+1; 
		}
        //ATRIBUINDO O VALOR DO VETOR TEMPORARIO AO VETOR.
        for(i = 0; i < n;i++)
            v[i] = temp[i];
	}
}

void lerVetor(int v[], int n)
{
    for(int i = 0; i < n; i++)
        printf("\t%d\t|", v[i]);
}

int main()
{
    int vetor[10] = {3,4,5,6,7,8,2,4,1,2};
    mergeSort(vetor, 10);
    lerVetor(vetor, 10);
}
