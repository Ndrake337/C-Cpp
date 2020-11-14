#include<stdio.h>
#include<math.h>
//Exercício 4 de programação feito por Rafael Prado Costa no dia 06/09/19
//[]-------------------------------------------------------------[]
//   Função: calcula_hexagono()
//   Entrada: lado de um hexagono regular 
//   Saída:   area e o perímetro
//       area = 3 * lado^2 *  raiz_quadrada(3)/2
//       perimetro = 6 * lado
//[]-------------------------------------------------------------[]
void calcula_hexagono(float lado, float *area, float *perimetro){
   float a, p;
   a = 3 * (lado * lado) * (sqrt(3) / 2);
   p = 6 * lado;
   *area = a;
   *perimetro = p;
}


//[]-------------------------------------------------------------[]
//   Função: testar()
//   Entrada: valor obtido da funcao, valor esperado
//   Saída: ok se obtido igual a esperado e nao ok caso contrario
//[]-------------------------------------------------------------[]
void testar(float obtido, float esperado){
   if (fabs(obtido - esperado) < 0.0001)
	   printf("Parabens !!!");
   else
	   printf("Ainda nao !!!");
   printf(" obtido: %f  esperado: %f\n", obtido, esperado);
}

//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
void caso_de_teste01(){
   float area, perimetro;
   calcula_hexagono(6, &area, &perimetro);
   testar(area, 93.53074666666);
   testar(perimetro, 36);
}

void caso_de_teste02(){
   float area, perimetro;
   calcula_hexagono(8, &area, &perimetro);
   testar(area, 166.276871);
   testar(perimetro, 48);
}

void caso_de_teste03(){
   float area, perimetro;
   calcula_hexagono(7, &area, &perimetro);
   testar(area,127.305733); 
   testar(perimetro, 42);
}


void caso_de_teste04(){
   float area, perimetro;
   calcula_hexagono(5, &area, &perimetro);
   testar(area, 64.951904);
   testar(perimetro, 30);
}

void caso_de_teste05(){
   float area, perimetro;
   calcula_hexagono(10, &area, &perimetro);
   testar(area, 259.807617);
   testar(perimetro, 60);
}

void caso_de_teste06(){   
   float area, perimetro;
   calcula_hexagono(3, &area, &perimetro);
   testar(area, 23.382687);
   testar(perimetro, 18);
}

void caso_de_teste07(){
   float area, perimetro;
   calcula_hexagono(11, &area, &perimetro);
   testar(area, 314.367218);
   testar(perimetro, 66);
}

void caso_de_teste08(){   
   float area, perimetro;
   calcula_hexagono(12, &area, &perimetro);
   testar(area,374.122986);
   testar(perimetro, 72);
}

void caso_de_teste09(){   
   float area, perimetro;
   calcula_hexagono(13, &area, &perimetro);
   testar(area, 439.074890);
   testar(perimetro, 78);
}

void caso_de_teste10(){   
   float area, perimetro;
   calcula_hexagono(4, &area, &perimetro);
   testar(area, 41.569218);
   testar(perimetro, 24);
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
