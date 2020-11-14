#include <stdio.h>
#include <string.h>
#include <ctype.h>


//[]-------------------------------------------[]
//   Funcao: contar_palavras()
//   Entrada: string s e o seu tamanho n
//           A string s eh uma frase sem espaços
//           antes da primeira palavra e sem 
//           espaços depois da última palavra.
//           Um espaço separa uma palavra da
//           palavra seguinte.
//           Não há sinais de pontuação.
//   Saida: devolve o número de palavras 
//          na string
//          ex: 
//           entrada:  "o rato roeu a roupa" 
//           saida: 5
//[]-------------------------------------------[]
//
int contar_palavras(char s[], int n){
   return 0;
}

//[]-------------------------------------------------------------[]
//   Função: testar()
//   Entrada: valor obtido da funcao, valor esperado
//   Saída: ok se obtido igual a esperado e nao ok caso contrario
//[]-------------------------------------------------------------[]
void testar(int obtido, int esperado){
   if (obtido == esperado)
	   printf("Parabens !!!");
   else
	   printf("Ainda nao !!!");
   printf(" obtido: %d  esperado: %d\n", obtido, esperado);
}


//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
void caso_de_teste01(){
  char s[80] = "o rato roeu a roupa do rei";
  testar(contar_palavras(s, strlen(s)), 7);
}

void caso_de_teste02(){
  char s[80] = "minha terra tem palmeiras onde canta o sabia";
  testar(contar_palavras(s, strlen(s)), 8);
}

void caso_de_teste03(){
  char s[80] = "engenharia da computação";
  testar(contar_palavras(s, strlen(s)), 3);
}

void caso_de_teste04(){
  char s[80] = "linguagem de programação C";
  testar(contar_palavras(s, strlen(s)), 4);
}

void caso_de_teste05(){
  char s[80] = "algoritmos e estrutura de dados";
  testar(contar_palavras(s, strlen(s)), 5);
}

void caso_de_teste06(){
  char s[80] = "No meio do caminho tinha uma pedra";
  testar(contar_palavras(s, strlen(s)), 7);
}

void caso_de_teste07(){
  char s[80] = "Sonhe aquilo que você quer ser";
  testar(contar_palavras(s, strlen(s)), 6);
}

void caso_de_teste08(){
  char s[80] = "Ando muito completo de vazios";
  testar(contar_palavras(s, strlen(s)), 5);
}

void caso_de_teste09(){
  char s[80] = "";
  testar(contar_palavras(s, strlen(s)), 0);
}

void caso_de_teste10(){
  char s[80] = "Aqui morava um rei quando eu menino vestia ouro e castanho do gibão";
  testar(contar_palavras(s, strlen(s)), 13);
}

int main(void) {
  caso_de_teste01();
  caso_de_teste02();
  caso_de_teste03();
  caso_de_teste04();
  caso_de_teste05();
  caso_de_teste06();
  caso_de_teste07();
  caso_de_teste08();
  caso_de_teste09();
  caso_de_teste10();
  return 0;
}
