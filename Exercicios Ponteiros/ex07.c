#include<stdio.h>
#include<assert.h>
#include<math.h>

#define PI 3.14159265358979323846

//Exercício 7 de programação feito por Rafael Prado Costa no dia 06/09/19
//[]-------------------------------------------------------------[]
//   Função: calcular_esfera()
//   Entrada: o raio r da esfera 
//   Saída:   área da superfície e o volume de uma esfera de raio r
//     area = 4 * pi * r ^ 2
//     volume = 4 / 3 * pi * r ^ 3 
//[]-------------------------------------------------------------[]
void calcular_esfera(float r, float *area, float *volume)
{
   float a, v;
   a = 4 * PI * (r * r);
   v = (4 / 3) * PI * (r * r * r);
   *volume = v;
   *area = a;
}


//[]-------------------------------------------------------------[]
//   Função: testar()
//   Entrada: valor obtido da funcao, valor esperado
//   Saída: ok se obtido igual a esperado e nao ok caso contrario
//[]-------------------------------------------------------------[]
void testar(float obtido, float esperado){
   if (fabs(obtido - esperado) < 0.00001)
	   printf("Parabens !!!");
   else
	   printf("Ainda nao !!!");
   printf(" obtido: %f  esperado: %f\n", obtido, esperado);

   assert(fabs(obtido - esperado) < 0.00001);
}

//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
void caso_de_teste01(){
   float a;
   float v;
   calcular_esfera(1, &a, &v);
   testar(a, 12.566371);
   testar(v, 3.141593);
}

void caso_de_teste02(){
   float a;
   float v;
   calcular_esfera(2, &a, &v);
   testar(a, 50.265484);
   testar(v, 25.132742);
}

void caso_de_teste03(){
   float a;
   float v;
   calcular_esfera(3, &a, &v);
   testar(a, 113.097336);
   testar(v, 84.822998);
}

void caso_de_teste04(){
   float a;
   float v;
   calcular_esfera(4, &a, &v);
   testar(a, 201.061935);
   testar(v, 201.061935);
}

void caso_de_teste05(){
   float a;
   float v;
   calcular_esfera(5, &a, &v);
   testar(a, 314.159271);
   testar(v, 392.699097);
}

void caso_de_teste06(){
   float a;
   float v;
   calcular_esfera(6, &a, &v);
   testar(a, 452.389343);
   testar(v, 678.583984);
}

void caso_de_teste07(){
   float a;
   float v;
   calcular_esfera(7, &a, &v);
   testar(a, 615.752136);
   testar(v, 1077.566284);
}


void caso_de_teste08(){
   float a;
   float v;
   calcular_esfera(8, &a, &v);
   testar(a, 804.247742);
   testar(v, 1608.495483);
}

void caso_de_teste09(){
   float a;
   float v;
   calcular_esfera(9, &a, &v);
   testar(a, 1017.876038);
   testar(v, 2290.220947);
}

void caso_de_teste10(){
   float a;
   float v;
   calcular_esfera(10, &a, &v);
   testar(a, 1256.637085);
   testar(v, 3141.592773);
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
