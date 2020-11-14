#include<stdio.h>
//Exercício 2 de programação feito por Rafael Prado Costa no dia 06/09/19
//[]-------------------------------------------------------------[]
//   Função: converter_horas_minutos_segundos()
//   Entrada: um tempo dado em segundos
//   Saída:   horas, minutos e segundos
//[]-------------------------------------------------------------[]
void converter_horas_minutos_segundos(int tempo, int *hora, int *minutos, int *segundos)
{
   int a, b, c, d;
   a = tempo % 60;
   b = (tempo - a) / 60;
   c = b % 60;
   d = (b - c) / 60;
   *segundos = a;
   *minutos = c;
   *hora = d;
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
   int h, m, s;
   converter_horas_minutos_segundos(6, &h, &m, &s);
   testar(h, 0);
   testar(m, 0);
   testar(s, 6);
}

void caso_de_teste02(){
   int h, m, s;
   converter_horas_minutos_segundos(367, &h, &m, &s);
   testar(h, 0);
   testar(m, 6);
   testar(s, 7);
}

void caso_de_teste03(){
   int h, m, s;
   converter_horas_minutos_segundos(3786, &h, &m, &s);
   testar(h, 1);
   testar(m, 3);
   testar(s, 6);
}

void caso_de_teste04(){
   int h, m, s;
   converter_horas_minutos_segundos(5879, &h, &m, &s);
   testar(h, 1);
   testar(m, 37);
   testar(s, 59);
}

void caso_de_teste05(){
   int h, m, s;
   converter_horas_minutos_segundos(12364, &h, &m, &s);
   testar(h, 3);
   testar(m, 26);
   testar(s, 4);
}

void caso_de_teste06(){
   int h, m, s;
   converter_horas_minutos_segundos(32548, &h, &m, &s);
   testar(h, 9);
   testar(m, 2);
   testar(s, 28);
}

void caso_de_teste07(){
   int h, m, s;
   converter_horas_minutos_segundos(656, &h, &m, &s);
   testar(h, 0);
   testar(m, 10);
   testar(s, 56);
}

void caso_de_teste08(){
   int h, m, s;
   converter_horas_minutos_segundos(9878, &h, &m, &s);
   testar(h, 2);
   testar(m, 44);
   testar(s, 38);
}

void caso_de_teste09(){
   int h, m, s;
   converter_horas_minutos_segundos(79874, &h, &m, &s);
   testar(h, 22);
   testar(m, 11);
   testar(s, 14);
}

void caso_de_teste10(){
   int h, m, s;
   converter_horas_minutos_segundos(321654, &h, &m, &s);
   testar(h, 89);
   testar(m, 20);
   testar(s, 54);
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
