#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <assert.h>



//[]-------------------------------------------[]
//   Funcao: conta_ocorrencias()
//   Entrada: string frase e string palavra 
//   Saida: retorna quantas vezes a palavra ocorre
//          na frase
//           entrada: frase = "ana e mariana gostam de banana"
//                    palavra = "ana
//           saida: 4
//[]-------------------------------------------[]
//
int conta_ocorrencias(char *frase, char *palavra){
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
   assert(obtido == esperado);
}


//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
void caso_de_teste01(){
  char frase[80] = "ana e mariana gostam de banana";
  char palavra[10] = "ana";
  testar(conta_ocorrencias(frase, palavra), 4);
}

void caso_de_teste02(){
  char frase[80] = "o rato roeu o sapato barato";
  char palavra[10] = "ato";
  testar(conta_ocorrencias(frase, palavra), 3);

}

void caso_de_teste03(){
  char frase[80] = "pato gato mato sapo tato aparato";
  char palavra[10] = "ato";
  testar(conta_ocorrencias(frase, palavra), 5);

}

void caso_de_teste04(){
  char frase[80] = "o rato roeu a roupa do rei de roma";
  char palavra[10] = "ro";
  testar(conta_ocorrencias(frase, palavra), 3);

}

void caso_de_teste05(){
  char frase[80] = "minha terra tem palmeiras onde canta o sabia";
  char palavra[10] = "sabia";
  testar(conta_ocorrencias(frase, palavra), 1);

}

void caso_de_teste06(){
  char frase[80] = "sabia que o sabia sabia assobiar";
  char palavra[10] = "sabia";
  testar(conta_ocorrencias(frase, palavra), 3);

}

void caso_de_teste07(){
  char frase[80] = "";
  char palavra[10] = "ana";
  testar(conta_ocorrencias(frase, palavra), 0);

}

void caso_de_teste08(){
  char frase[80] = "codecodecodecodcodecodce";
  char palavra[10] = "code";
  testar(conta_ocorrencias(frase, palavra), 4);

}

void caso_de_teste09(){
  char frase[80] = "abcdabcacbabcaabbacbababc abc bca abc";
  char palavra[10] = "abc";
  testar(conta_ocorrencias(frase, palavra), 6);

}

void caso_de_teste10(){
  char frase[80] = "aabaaabaababaababbbaababababababaabaabaaabaab";
  char palavra[10] = "aab";
  testar(conta_ocorrencias(frase, palavra), 9);

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
