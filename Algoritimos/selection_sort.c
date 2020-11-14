#include <stdio.h>
#include <stdlib.h>

void troca(int v[],int i,int j)
{
  int temp;
  temp = v[i];
  v[i] = v[j];
  v[j] = temp;
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

void printf_vetor(int v[],int n)
{
int i;
  printf("VETOR = ");

	for(i = 0; i<n;i++){ 
    	printf("%d\t",v[i]);
	}
  printf("\n");
}


main () {
  int v[10] = {10,4,5,2,1,6,3,7,4,154};

  selection_sort (v, 10);
  printf_vetor(v,10);
}
