
#include<stdio.h>
#include<stdlib.h>

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
  }
}

int main()
{
    int v[5]={8,5,23,7,1};
    selection_sort(v,5);
    for(int i=0;i<5;i++)
        printf("%d\t",v[i]);

}