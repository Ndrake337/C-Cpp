#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 


void printRandoms(int lower, int upper, int count, int v[]) { 
    int i; 
    for (i = 0; i < count; i++) { 
        int num = (rand() % (upper - lower + 1)) + lower; 
        v[i] = num; 
    } 
} 
  
void printaVetor(int v[], int count){
  for (int i = 0; i<count; i++){
    printf(" %d ",v[i]);
  }
}

void buscaDeK(int v[], int count, int k){
  int a = 0;
  for(int i = 0; i<count; i++){
    if(v[i]>=k){
      a++;
    }
  }

  printf("Existem %d valores acima de K", a);
}

int main(void) {
  int tamVetor;
  printf("Informe o tamanho do vetor: ");
  scanf("%d", &tamVetor);
  
  int lower = 0, upper = 100, count = tamVetor, v[count], k;
  srand(time(0)); 
  
  printRandoms(lower, upper, count, v); 
  
  printaVetor(v, count);
  printf("\n\nDetermine o valor de K: ");


  scanf("%d", &k);

  buscaDeK(v,count,k);
  return 0;
}