#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//[]-------------------------------------------[]
//   Funcao: contar_vogais()
//   Entrada: string s e o seu tamanho n
//   Saida: devolve o número de vogais de s
//[]-------------------------------------------[]
//
int contar_vogais(char s[], int n)
{
	int i, num = 0;
	char vogais[10] = "AaEeIiOoUu";

	while (*s)
	{
		for (i=0; i<10; i++)
			if (*s == vogais[i])
				num++;
		s++;
	}
	return num;
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
  testar(contar_vogais(s, strlen(s)), 5);
}

void caso_de_teste02(){
  char s[80] = "ola pessoal";
  testar(contar_vogais(s, strlen(s)), 5);
}

void caso_de_teste03(){
  char s[80] = "linguagem C";
  testar(contar_vogais(s, strlen(s)), 4);
}

void caso_de_teste04(){
  char s[80] = "aEioyuIoEa";
  testar(contar_vogais(s, strlen(s)), 9);
}

void caso_de_teste05(){
  char s[80] = "qwertyuiop";
  testar(contar_vogais(s, strlen(s)), 4);
}

void caso_de_teste06(){
  char s[80] = "sdfghjklçxzcvbnm";
  testar(contar_vogais(s, strlen(s)), 0);
}

void caso_de_teste07(){
  char s[80] = "engenharia da computacao";
  testar(contar_vogais(s, strlen(s)), 11);
}

void caso_de_teste08(){
  char s[80] = "aa";
  testar(contar_vogais(s, strlen(s)), 2);
}

void caso_de_teste09(){
  char s[80] = "";
  testar(contar_vogais(s, strlen(s)), 0);
}

void caso_de_teste10(){
  char s[80] = "aaabbbeeeiii";
  testar(contar_vogais(s, strlen(s)), 9);
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
