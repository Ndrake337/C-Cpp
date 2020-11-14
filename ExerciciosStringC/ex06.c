#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//[]-------------------------------------------[]
//   Funcao: multString()
//   Entrada: string s e um inteiro n (multiplicador)
//   Saida: retorna uma string com n copias da string original
//           entrada: "Hi", 2
//           saida: "HiHi"
//[]-------------------------------------------[]
//
void multString(char s[], int n){
  // seu codigo aqui
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
  char s[80] = "Hi";
  multString(s, 2);
  testar(strcmp(s, "HiHi"), 0);
}

void caso_de_teste02(){
  char s[80] = "Hi";
  multString(s, 3);
  testar(strcmp(s, "HiHiHi"), 0);
}

void caso_de_teste03(){
  char s[80] = "Hi";
  multString(s, 1);
  testar(strcmp(s, "Hi"), 0);
}

void caso_de_teste04(){
  char s[80] = "Hi";
  multString(s, 0);
  testar(strcmp(s, ""), 0);
}

void caso_de_teste05(){
  char s[80] = "Hi";
  multString(s, 5);
  testar(strcmp(s, "HiHiHiHiHi"), 0);
}

void caso_de_teste06(){
  char s[80] = "Olá garoto!";
  multString(s, 2);
  testar(strcmp(s, "Olá garoto!Olá garoto!"), 0);
}

void caso_de_teste07(){
  char s[80] = "x";
  multString(s, 4);
  testar(strcmp(s, "xxxx"), 0);
}

void caso_de_teste08(){
  char s[80] = " ";
  multString(s, 4);
  testar(strcmp(s, "    "), 0);
}

void caso_de_teste09(){
  char s[80] = "codigo";
  multString(s, 2);
  testar(strcmp(s, "codigocodigo"), 0);
}

void caso_de_teste10(){
  char s[80] = "codigo";
  multString(s, 3);
  testar(strcmp(s, "codigocodigocodigo"), 0);
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