/*
  Exericio Lista 1 - Busca maior elelemto do vetor Recursivamente
  Aluno: Matheus Felipe Neves Campos Cardoso
  Engenharia da computação - 4º semestre
*/


//inclusão das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declarando função de busca
int buscaMaiorElemento(int v[], int n, int k, int aux) {
  //Comparação caso estejamos na ultima posição do vetor retornaremos e ela seja a maior retornaremos o valor armazenado nela
  if(v[k] >= aux && k == n-1){
    return v[k];
  }
  //Caso encontre um numero maior que o que estamos armazenando na variavel auxiliar o armazenamos na mesma e retornamos Recursivamente na função
  else if (v[k] >= aux && k != n-1){
    aux = v[k];
    return buscaMaiorElemento(v,9,k+1,aux);
  }
  //caso o numero comparado seja menor só pulamos para o proximo indicie do vetor
  else if(v[k] < aux && k != n-1){
    return buscaMaiorElemento(v,9,k+1,aux);
  }
  //Caso tenhamos chegado na ultima posição do vetor retornar o valor armazenado em Auxiliar
  if(k == n-1){
    return aux;
  }
}

int main(void) {
  int k = 0;//declaro K que será usado para verificar cada indicie do vetor
  int aux = 0; //declaro aux como 0 para ser o comparador dos valores do vetor
  int v[9] = {1,2,3,4,12,6,7,8,9}; //gero um vetor de 9 indicies para teste
  int valor = buscaMaiorElemento(v, 9,k,aux);// chamando a função desenvolvidoa
  printf("%d", valor); // printando o valor retornado pelo código
}