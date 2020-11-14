#include<stdio.h>
#include<assert.h>
//Exercício 8 de programação feito por Rafael Prado Costa no dia 06/09/19

//[]-------------------------------------------------------------[]
//   Função: troque_posicao_par_por_impar()
//   Entrada: um apontador para o inicio do vetor v, seu tamanho n
//   Saída:   trocar os elementos de posicao par com os de posicao
//            impar consecutiva. 
//     ex.:  
//        entrada: [1,2,3,4]
//        saida:   [2,1,4,3]
//[]-------------------------------------------------------------[]
void troque_posicao_par_por_impar(int *v, int n)
{
   int a;
   if (n % 2 == 0)
   {
      for (int i = 0; i < n; i += 2)
      {
         a = v[i];
         v[i] = v[i + 1];
         v[i + 1] = a;
      }
   }
   else
   {
      for (int i = 0; i <= n - 2; i += 2)
      {
         a = v[i];
         v[i] = v[i + 1];
         v[i + 1] = a;
      }
   }
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
   int v[4] = {1,2,3,4};
   troque_posicao_par_por_impar(v, 4);
  
   testar(v[0], 2);
   testar(v[1], 1);
   testar(v[2], 4);
   testar(v[3], 3);
}

void caso_de_teste02(){
   int v[1] = {1};
   troque_posicao_par_por_impar(v, 1);
  
   testar(v[0], 1);
}

void caso_de_teste03(){
   int v[2] = {1, 2};
   troque_posicao_par_por_impar(v, 2);

   testar(v[0], 2);
   testar(v[1], 1);
}

void caso_de_teste04(){
   int v[3] = {1, 2, 3};
   troque_posicao_par_por_impar(v, 3);

   testar(v[0], 2);
   testar(v[1], 1);
   testar(v[2], 3);
}

void caso_de_teste05(){
   int v[5] = {1,2,3,4,5};
   troque_posicao_par_por_impar(v, 5);
  
   testar(v[0], 2);
   testar(v[1], 1);
   testar(v[2], 4);
   testar(v[3], 3);
   testar(v[4], 5);
}

void caso_de_teste06(){
   int v[6] = {1,2,3,4,5,6};
   troque_posicao_par_por_impar(v, 6);
  
   testar(v[0], 2);
   testar(v[1], 1);
   testar(v[2], 4);
   testar(v[3], 3);
   testar(v[4], 6);
   testar(v[5], 5);
}

void caso_de_teste07(){
   int v[7] = {1,2,3,4,5,6,7};
   troque_posicao_par_por_impar(v, 7);
  
   testar(v[0], 2);
   testar(v[1], 1);
   testar(v[2], 4);
   testar(v[3], 3);
   testar(v[4], 6);
   testar(v[5], 5);
   testar(v[6], 7);
}

void caso_de_teste08(){
   int v[8] = {1,2,3,4,5,6,7,8};
   troque_posicao_par_por_impar(v, 8);
  
   testar(v[0], 2);
   testar(v[1], 1);
   testar(v[2], 4);
   testar(v[3], 3);
   testar(v[4], 6);
   testar(v[5], 5);
   testar(v[6], 8);
   testar(v[7], 7);
}

void caso_de_teste09(){
   int v[9] = {1,2,3,4,5,6,7,8,9};
   troque_posicao_par_por_impar(v, 9);
  
   testar(v[0], 2);
   testar(v[1], 1);
   testar(v[2], 4);
   testar(v[3], 3);
   testar(v[4], 6);
   testar(v[5], 5);
   testar(v[6], 8);
   testar(v[7], 7);
   testar(v[8], 9);
}

void caso_de_teste10(){
   int v[10] = {1,2,3,4,5,6,7,8,9,10};
   troque_posicao_par_por_impar(v, 10);
  
   testar(v[0], 2);
   testar(v[1], 1);
   testar(v[2], 4);
   testar(v[3], 3);
   testar(v[4], 6);
   testar(v[5], 5);
   testar(v[6], 8);
   testar(v[7], 7);
   testar(v[8], 10);
   testar(v[9], 9);
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
