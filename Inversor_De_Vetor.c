#include <stdio.h>

void InverteVetor (int v[],int n){
  int i = 0;
  int j = n-1;
  int aux;
  while(j>i){
    aux = v[i];
    v[i] = v[j];
    v[j] = aux;
    i++;
    j--;
  }
}

void printaVetor (int v[], int n){
  for(int i = 0; i<n; i++){
    printf("%d", v[i]);
  }
}

int main(void) {
  int v[6] = {1,2,3,4,5,6};
  InverteVetor(v,6);
  printaVetor (v,6);  
}