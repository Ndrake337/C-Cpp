#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(int argc, char *argv[]){
  setlocale(LC_ALL, "Portuguese");
  int a, b, auxiliar, i, n;
  
  printf("Este Programa exibe a sequencia Fibonnaci até passar do 100 numero\n\n1\n");
  
  //laço para realiza o calculo
  for(i = 0; i < 11; i++)//definie o intervalo
  {
    auxiliar = a + b; //realiza a soma do numero pelo seu anterior
    a = b; //iguala a variavel B a variavel A tornando ela o valor anterior
    b = auxiliar; //iguala B a variavel auxiliar para realizar a soma 
 
    // Imprimo o número na tela.
    printf("%d\n", auxiliar);
  }
  
}