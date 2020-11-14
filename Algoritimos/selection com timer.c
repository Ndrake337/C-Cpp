
#include<stdio.h>
#include<stdlib.h>
#include <windows.h>
#include <time.h>

#define N 5000

void selection_sort(int num[], int tam) { 
  int i, j, min, aux;
  for (i = 0; i < (tam-1); i++) 
  {
     min = i;
     for (j = (i+1); j < tam; j++) {
       if(num[j] < num[min]) 
         min = j;
     }
     if (num[i] != num[min]) {
       aux = num[i];
       num[i] = num[min];
       num[min] = aux;
     }
  };
}

void gerador(int v[], int n){

    srand(time(NULL));
    for (int i = 0; i < n; i++){
       v[i] = rand()%2; 
    }
}

int v[N];

int main()
{    
    clock_t start_t, end_t, total_t;
    start_t = clock();
    int i;
    

    gerador(v, N);

    printf("Going to scan a big loop, start_t = %ld\n", start_t);
    selection_sort(v,N);
    for(int i=0;i<N;i++)
        printf("%d\t",v[i]);

    end_t = clock();
    printf("End of the big loop, end_t = %ld ms\n", end_t);



    return 0;
}