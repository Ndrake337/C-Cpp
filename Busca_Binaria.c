
/*
  Exercicio solicitado da Lista 2

  Aluno Matheus Felipe
  Engenharia da Computação - 4º Semestre

*/
//Declaração da biblioteca
#include <stdio.h>
// Declaração da função
int buscaBinaria(int v[], int x, int N)
{
  //declaração das variaveis de inicio (i), meio (m), fim (f) e da variavel i usada para o loop while como condição de parada
  int i, m, f; i = 0;
  f = N-1; // definindo fim como N-1 ja que um vetor de 9 elementos vai do 0 ao 8
  //inicialização do loop while que durará enquanto inicio (i) for meno ou igual a fim (f)
  while (i <= f)
  {
    m = (i + f)/2;//definindo que meio (m) = ( inicio (i) + fim (f) ) / 2
    //caso o valor do meio seja o valor procurado retornamos o indicie do meio (m) onde está armazenado o valor procurado
    if (v[m] == x){
          return m;
    }
    //caso o valor do meio seja menor que o valor procurado considerando que o vetor está ordenado definimos que o inicio agora vale a posição do meio + 1 
    if (v[m] < x){
      i = m + 1;
    }
    //caso o valor do meio seja maior que o que procuramos o fim será meio - 1 considerando que o vetor está ordenado
    else{
      f = m - 1;
    }
    
  }
  return -1; //Caso o valor não esteja incluso no vetor retornamos -1
}

int main(void) {
  int v[9] = {1,2,3,4,5,6,7,8,9}; //gerando o vetor para ser buscado
  int valor = buscaBinaria(v, 9, 9); //chamando a função
  printf("%d", valor);//retornando o indicie no qual o valor solicitado se encontra caso exista no vetor
  return 0;
}