#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//PROGRAMA FEITO POR ERIC KEI, MATHEUS FELIPE E RAFAEL PRADO

int *alocar_vetor (int linhas)
{
	int *a;
	a = (int *) calloc(linhas, sizeof(int ));
	return a;
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
     * Este laï¿½o irï¿½ varrer os vetores da esquerda para direira
     * procurando os elementos que sï¿½o menores ou iguais ao pivï¿½.
      Esses elementos sï¿½o colocados na partiï¿½ï¿½o esquerda.         
     */
    for (j = p; j <= r - 1; j++) 
    {
        if (V[j] <= pivo) 
        {
            i = i + 1;
            troca(V, i, j);
        }
    }
    //coloca o pivï¿½ na posiï¿½ï¿½o de ordenaï¿½ï¿½o
    troca(V, i + 1, r);
    return i + 1; //retorna a posiï¿½ï¿½o do pivï¿½
}
 
void quickmd3(int V[], int p, int r) 
{
    if (p < r) 
    {
        //realiza a partiï¿½ï¿½o
        int q = particaomd3(V, p, r);
        //ordena a partiï¿½ï¿½o esquerda
        quickmd3(V, p, q - 1);
        //ordena a partiï¿½ï¿½o direita
        quickmd3(V, q + 1, r);
    }
}

int partition(int V[], int p, int r) 
{
    //sorteia um ï¿½ndice aleatï¿½rio entre p e r
    int k;
    double d;
    d = (double) rand () / ((double) RAND_MAX + 1);
    k = d * (r - p + 1);
    int randomIndex = p + k;
    
    //coloca o pivï¿½ aleatï¿½rio no r para aplicar a partiï¿½ï¿½o de Cormen
    troca(V, randomIndex, r);
    int pivo = V[r];
    int i = p - 1;
    int j;
    /*
     * Este laï¿½o irï¿½ varrer os vetores da esquerda para direira
     * procurando os elementos que sï¿½o menores ou iguais ao pivï¿½.
     * Esses elementos sï¿½o colocados na partiï¿½ï¿½o esquerda.         
     */
    for (j = p; j <= r - 1; j++) {
        if (V[j] <= pivo) {
            i = i + 1;
            troca(V, i, j);
        }
    }
    //coloca o pivï¿½ na posiï¿½ï¿½o de ordenaï¿½ï¿½o
    troca(V, i + 1, r);
    return i + 1; //retorna a posiï¿½ï¿½o do pivï¿½
}

void quickaleatorio(int V[], int p, int r) {
    if (p < r) {
        //realiza a particao
        int q = partition(V, p, r);
        //ordena a particao esquerda
        quickaleatorio(V, p, q - 1);
        //ordena a particao direita
        quickaleatorio(V, q + 1, r);
    }
}



int main()
{
	int N;
	int *v;
	FILE *arq;
	char nome_do_arq[2];
	clock_t t[7][30];
	int tempo[7][30];
	int nums [10] = {10,100,1000,10000, 100000, 500000, 1000000, 10000000, 50000000, 100000000};
	

    for(int n = 0;n<30;n++)	
	{
				N = nums[n];
				if(n > 10)
				{
					N = nums[n-10];
				}
				else if(n > 20)
				{
					N = nums[n-20];
				}
				itoa(n, nome_do_arq, 10);
				
				strcat(nome_do_arq,".txt");
				
				printf("%s\n\n", nome_do_arq);
				
				arq = fopen(nome_do_arq, "r");
				
				v = alocar_vetor(N);
				
				for(int i = 0; i < N; i++)
        		{
            		fscanf(arq, "%d", &v[i]);
        		}
				
				if (arq == NULL)
        			printf("Erro, nao foi possivel abrir o arquivo\n");
   			 	else
       		 		printf("Arquivo foi aberto!\n");

			for(int m = 1; m <= 7 ; m++)
			{

				
				if(m == 1){
    			
					puts("1. BUBBLE SORT");
				    t[m-1][n] = clock();
				
					bubbleSort(v,N);
					t[m-1][n] = clock() - t[m-1][n];
					tempo[m-1][n] = t[m-1][n];
					printf("%ld ms\n", t[m-1][n]);
					
				}
				else if(m == 2){	
					puts("2. INSERTION SORT");
					t[m-1][n] = clock();

					insertionSort(v,N);
					t[m-1][n] = clock() - t[m-1][n];
					tempo[m-1][n] = t[m-1][n];
					printf("%ld ms\n", t[m-1][n]);
				}	
				else if(m == 3){
					puts("3. SELECTION SORT");
					t[m-1][n] = clock();

					selection_sort(v,N);
					t[m-1][n] = clock() - t[m-1][n];
					tempo[m-1][n] = t[m-1][n];
					printf("%ld ms\n", t[m-1][n]);
				}		
				else if(m == 4){
					puts("4. MERGE SORT (RECURSIVO)");
					t[m-1][n] = clock();

			  				
					mergeSort(0,N,v);
					t[m-1][n] = clock()-t[m-1][n];
					tempo[m-1][n] = t[m-1][n];
					printf("%ld ms\n", t[m-1][n]);
				}
				else if(m == 5){
					puts("5. MERGE SORT (ITERATIVO)");
					t[m-1][n] = clock();

					mergeSort2(v,N);
					t[m-1][n] = clock()-t[m-1][n];
					tempo[m-1][n] = t[m-1][n];
					printf("%ld ms\n", t[m-1][n]);
				}
				else if(m == 6){	
					puts("6. QUICK SORT (PIVO COMO ELEMENTO ALEATORIO)");
					t[m-1][n] = clock();
			
			 				
					quickaleatorio(v,0,N-1);
					t[m-1][n] = clock()-t[m-1][n];
					tempo[m-1][n] = t[m-1][n];
					printf("%ld ms\n", t[m-1][n]);
				}	
				else if(m == 7){
					puts("7. QUICK SORT (PIVO COMO MEDIANA DE TRES)");
					t[m-1][n] = clock();
					quickmd3(v,0,N-1);
					t[m-1][n] = clock()-t[m-1][n];
					tempo[m-1][n] = t[m-1][n];
					printf("%ld ms\n", t[m-1][n]);
					puts("====================================================================");
				  }
				}
				free(v);	
	}
	
	for(int i = 0 ;i < 4 ;i ++)
	{
		for(int j = 0 ; j < 7 ; j++)
		{
			printf("%d \n", tempo[j][i]);
		}
	}
	
	FILE *file;
	file = fopen("tempos.txt", "w");
		
	fprintf(file, "\n====================Ordem crescente====================\n");
	for(int o = 0; o < 10 ; o++)
	{	
		fprintf(file, "<<<<<<<<<<<<<NUMERO DE ELEMENTOS: %d>>>>>>>>>>>>>>>>>>\n",nums[o]);
		for( int k = 0; k < 7 ; k++)
		{
		fprintf(file, "ALGORITMO NUMERO %d, TEMPO: %ld ms\n",k+1, tempo[k][o]);
		}
		fprintf(file, "\n\n==============================\n\n");
	}
	fprintf(file, "\n====================Ordem decrescente====================\n");
	for(int o = 10; o < 20 ; o++)
	{
		fprintf(file, "<<<<<<<<<<<<<NUMERO DE ELEMENTOS: %d>>>>>>>>>>>>>>>>>>\n",nums[o-10]);
		for( int k = 0; k < 7 ; k++)
		{
		fprintf(file, "ALGORITMO NUMERO %d, TEMPO: %ld ms\n",k+1, tempo[k][o]);
		}
		fprintf(file, "\n\n==============================\n\n");
	}

	fprintf(file, "\n====================Ordem aleatória====================\n");
	for(int o = 20; o < 30 ; o++)
	{
		fprintf(file, "<<<<<<<<<<<<<NUMERO DE ELEMENTOS: %d>>>>>>>>>>>>>>>>>>\n",nums[o-20]);
		for( int k = 0; k < 7 ; k++)
		{
		fprintf(file, "ALGORITMO NUMERO %d, TEMPO: %ld ms\n",k+1, tempo[k][o]);
		}
		fprintf(file, "\n\n==============================\n\n");
	}

	return 0;
	fclose(file);
}


