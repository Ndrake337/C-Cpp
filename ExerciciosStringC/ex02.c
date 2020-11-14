#include <stdio.h>
#include <string.h>
#include <ctype.h>

//[]-------------------------------------------[]
//   Funcao: tamanho()
//   Entrada: string s 
//   Saida: devolve o comprimento da string
//          (não use strlen) 
//[]-------------------------------------------[]
//
int tamanho(char s[])
{
    int i = 0;

    do {
        ++i;
    } while (s[i] != 0);
    if (i == 1)
    return 0;
    else
    return i;
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
  char s[80] = "abracadabra";
  testar(tamanho(s), strlen(s));
}

void caso_de_teste02(){
  char s[80] = "ola pessoal";
  testar(tamanho(s), strlen(s));
}

void caso_de_teste03(){
  char s[80] = "linguagem C";
  testar(tamanho(s), strlen(s));
}

void caso_de_teste04(){
  char s[80] = "aEioyuIoEa";
  testar(tamanho(s), strlen(s));
}

void caso_de_teste05(){
  char s[80] = "qwertyuiop";
  testar(tamanho(s), strlen(s));
}

void caso_de_teste06(){
  char s[80] = "sdfghjklçxzcvbnm";
  testar(tamanho(s), strlen(s));
}

void caso_de_teste07(){
  char s[80] = "engenharia da computacao";
  testar(tamanho(s), strlen(s));
}

void caso_de_teste08(){
  char s[80] = "aa";
  testar(tamanho(s), strlen(s));
}

void caso_de_teste09(){
  char s[80] = "";
  testar(tamanho(s), strlen(s));
}

void caso_de_teste10(){
  char s[80] = "aaabbbeeeiii";
  testar(tamanho(s), strlen(s));
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
