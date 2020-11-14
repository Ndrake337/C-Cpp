#include <stdio.h>
#include <string.h>
#include <ctype.h>

//[]-------------------------------------------[]
//   Funcao: contar_uns()
//   Entrada: string s e o seu tamanho n
//   Saida: devolve o número de 1's que aparece
//          na string
//          ex: 
//           entrada:  "0011001" 
//           saida: 3
//[]-------------------------------------------[]
//
int contar_uns(char s[], int n)
{
  int i, num = 0;
  char n1[1] = "1";

	while (*s)
	{
			if (*s == n1[0])
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
  char s[80] = "1101001001";
  testar(contar_uns(s, strlen(s)), 5);
}

void caso_de_teste02(){
  char s[80] = "000001111100000";
  testar(contar_uns(s, strlen(s)), 5);
}

void caso_de_teste03(){
  char s[80] = "1010101000";
  testar(contar_uns(s, strlen(s)), 4);
}

void caso_de_teste04(){
  char s[80] = "1101101101101";
  testar(contar_uns(s, strlen(s)), 9);
}

void caso_de_teste05(){
  char s[80] = "1100000011";
  testar(contar_uns(s, strlen(s)), 4);
}

void caso_de_teste06(){
  char s[80] = "00000";
  testar(contar_uns(s, strlen(s)), 0);
}

void caso_de_teste07(){
  char s[80] = "11111000111110001";
  testar(contar_uns(s, strlen(s)), 11);
}

void caso_de_teste08(){
  char s[80] = "11";
  testar(contar_uns(s, strlen(s)), 2);
}

void caso_de_teste09(){
  char s[80] = "";
  testar(contar_uns(s, strlen(s)), 0);
}

void caso_de_teste10(){
  char s[80] = "000001110000011100000111";
  testar(contar_uns(s, strlen(s)), 9);
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
