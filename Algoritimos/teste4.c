#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void *alocar_vetor(int linhas)
{
	int *v;

    v = (int*) malloc(linhas*sizeof(int));

    for(int i=0; i<linhas; i++)
    {
        v[i] = i;
    }
}

void troca(int v[], int i, int j)
{
	int temp;
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}

void trocar(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void embaralha(int v[],int N)
{
    int i, j,t;

    while (v[i] <N-1)
    {
        j = rand()%N;
        t = v[i];
        v[i] = v[j];
        v[j] = t;
        i++;
    }
}

void bubbleSort(int v[], int n)
{
for (int ultimo = n-1; ultimo > 0; ultimo--)
{
 	for (int i = 0; i < ultimo; i++){
		if (v[i] > v[i+1]){
			troca(v, i, i+1);
			}
	}
}

}

void insertionSort(int v[], int n)
{
 int x, j;
 for (int i = 1; i < n; i++)
 {
 	x = v[i];
 	j = i - 1;
 	while ((j >= 0) && v[j] > x)
 	{
 		v[j + 1] = v[j];
 		j = j - 1;
 	}
 	v[j + 1] = x;
 }
}



void selection_sort (int v[],int n) 
{
  int i, j, min;
  
  for (i = 0; i < (n - 1); i++) 
  {
    min = i;
    for (j = i+1; j < n; j++) 
    {
      if (v[j] < v[min]) 
	      min = j;
    }
    if (i != min) 
      troca(v,i,min);
  }
  printf ("\n");
}

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
        mergeSort(p, q, v);
        mergeSort(q, n, v);
        merge(v, p, q, n);
    }
}

void mergeSort2(int v[], int n)
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

int particao1(int v[], int ini, int fim)
{
	int pivot = v[fim];
	int i = (ini - 1);
	for (int j = ini; j <= fim - 1; j++)
	{
		if (v[j] <= pivot)
		{
			i++;
			trocar(&v[i], &v[j]);
		}
	}
	trocar(&v[i + 1], &v[fim]);
	return (i + 1);
}

void quickSort(int v[], int ini, int fim)
{
	if (ini < fim)
	{
		int pi = particao1(v, ini, fim);
		quickSort(v, ini, pi - 1);
		quickSort(v, pi + 1, fim);
	}
}

int md3(int a, int b, int c, int p, int m, int r)
{
    if (a < b) 
    {
        if (b < c) 
        {
            //a < b && b < c
            return m;
        } 
        else 
        {
            if (a < c) 
            {
                //a < c && c <= b
                return r;
            } 
            else 
            {
                //c <= a && a < b
                return p;
            }
        }
    } 
    else 
    {
        if (c < b) 
        {
            //c < b && b <= a
            return m;
        } 
        else 
        {
            if (c < a) 
            {
                //b <= c && c < a
                return r;
            } else 
            {
                //b <= a && a <= c
                return p;
            }
        }
    }
}
 
int particaomd3(int V[], int p, int r) 
{
    //procura a mediana entre p, m e r
    int m = (p + r) / 2;
    int a = V[p];
    int b = V[m];
    int c = V[r];
    int mediana;
    mediana = md3(a, b, c, p, m, r);
    
    troca(V, mediana, r); //Mediana no r para poder usa-lo como pivo
    int pivo = V[r];
    int i = p - 1;
    int j;
    /*
     * Este laço irá varrer os vetores da esquerda para direira
     * procurando os elementos que são menores ou iguais ao pivô.
      Esses elementos são colocados na partição esquerda.         
     */
    for (j = p; j <= r - 1; j++) 
    {
        if (V[j] <= pivo) 
        {
            i = i + 1;
            troca(V, i, j);
        }
    }
    //coloca o pivô na posição de ordenação
    troca(V, i + 1, r);
    return i + 1; //retorna a posição do pivô
}
 
void quickmd3(int V[], int p, int r) 
{
    if (p < r) 
    {
        //realiza a partição
        int q = particaomd3(V, p, r);
        //ordena a partição esquerda
        quickmd3(V, p, q - 1);
        //ordena a partição direita
        quickmd3(V, q + 1, r);
    }
}


int main()
{
	int *v, N;
	for(int elementos = 1; elementos <= 10; elementos++)
{
	
		if(elementos == 1){
			N = 10;
			puts("N = 10");
			
			v = alocar_vetor(N);
			}
			else if(elementos == 2){
			N = 100;
			puts("N = 100");
			
			v = alocar_vetor(N);
			}
		else if(elementos == 3){
			N = 1000;
			puts("N = 1000");
			
			v = alocar_vetor(N);
			}
		else if(elementos == 4){
			N = 10000;
			puts("N = 10000");
			
			v = alocar_vetor(N);
			}
		else if(elementos == 5){
			N = 100000;
			puts("N = 100000");
			
			v = alocar_vetor(N);
			}
		else if(elementos == 6){
			N = 500000;
			puts("N = 500000");
			
			v = alocar_vetor(N);
			}
		else if(elementos == 7){
			N = 1000000;
			puts("N = 1000000");
			
			v = alocar_vetor(N);
			}
		else if(elementos == 8){
			N = 10000000;
			puts("N = 10000000");
			
			v = alocar_vetor(N);
			}
		else if(elementos == 9){
			N = 50000000;
			puts("N = 50000000");
			
			v = alocar_vetor(N);
			}
		else if(elementos == 10){
			N = 100000000;
			puts("N = 100000000");
			
			v = alocar_vetor(N);
			}

	
		for(int algoritmo = 1; algoritmo <= 8 ; algoritmo++)
		{
				if(algoritmo == 1){
					puts("1. BUBBLE SORT");
					embaralha(v, N);
								
					bubbleSort(v,N);
				}
				else if(algoritmo == 2){	
					puts("2. INSERTION SORT");
					embaralha(v, N);
			  			
					insertionSort(v,N);
				}	
				else if(algoritmo == 3){
					puts("3. SELECTION SORT");
					embaralha(v, N);
			  			
					selection_sort(v,N);
				}		
				else if(algoritmo == 4){
					puts("4. MERGE SORT (RECURSIVO)");
					embaralha(v, N);
			  				
					mergeSort(0,N,v);
				}
				else if(algoritmo == 5){
					puts("5. MERGE SORT (ITERATIVO)");
					embaralha(v, N);
			  			
					mergeSort2(v,N);
				}
				else if(algoritmo == 6){
					puts("6. QUICK SORT (PIVO COMO ULTIMO ELEMENTO)");
					embaralha(v, N);
			  			
					quickSort(v,0,N-1);
				}
				else if(algoritmo == 7){	
					puts("7. QUICK SORT (PIVO COMO ELEMENTO ALEATORIO)");
					embaralha(v, N);
			 				
					//quick_sort2();
				}	
				else if(algoritmo == 8){
					puts("8. QUICK SORT (PIVO COMO MEDIANA DE TRES)");
					embaralha(v, N);
			  			
					quickmd3(v,0,N-1);
				}	
	}
}
}

