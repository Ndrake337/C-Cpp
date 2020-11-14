#include<stdio.h>
//Exercício 3 de programação feito por Rafael Prado Costa no dia 06/09/19
//[]-------------------------------------------------------------[]
//   Função: soma_produto()
//   Entrada: a e b do tipo inteiro
//   Saída:   soma e produto entre a e b
//[]-------------------------------------------------------------[]
void soma_produto(int a, int b, int *soma, int *produto){
   int s, p;
   p = a * b;
   s = a + b;
   *soma = s;
   *produto = p;
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
   int s, p;
   soma_produto(6, 2, &s, &p);
   testar(s, 8);
   testar(p, 12);
}

void caso_de_teste02(){
   int s, p;
   soma_produto(3, 2, &s, &p);
   testar(s, 5);
   testar(p, 6);
}

void caso_de_teste03(){
   int s, p;
   soma_produto(4, 5, &s, &p);
   testar(s, 9);
   testar(p, 20);

}

void caso_de_teste04(){
   int s, p;
   soma_produto(6, 6, &s, &p);
   testar(s, 12);
   testar(p, 36);
}

void caso_de_teste05(){
   int s, p;
   soma_produto(7, 8, &s, &p);
   testar(s, 15);
   testar(p, 56);
}

void caso_de_teste06(){
   int s, p;
   soma_produto(30, 2, &s, &p);
   testar(s, 32);
   testar(p, 60);
}

void caso_de_teste07(){
   int s, p;
   soma_produto(0, 0, &s, &p);
   testar(s, 0);
   testar(p, 0);
}

void caso_de_teste08(){
   int s, p;
   soma_produto(10, 2, &s, &p);
   testar(s, 12);
   testar(p, 20);
}

void caso_de_teste09(){
   int s, p;
   soma_produto(3, 5, &s, &p);
   testar(s, 8);
   testar(p, 15);
}

void caso_de_teste10(){
   int s, p;
   soma_produto(4, 7, &s, &p);
   testar(s, 11);
   testar(p, 28);
}



//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
int main(){
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
