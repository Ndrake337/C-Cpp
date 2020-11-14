#include<stdio.h>
//Exercício 1 de programação feito por Rafael Prado Costa no dia 06/09/19
//[]-------------------------------------------------------------[]
//   Função: extrair_dia_mes_ano()
//   Entrada: uma string representando a data
//   Saída:   dia, mes e ano da data
//[]-------------------------------------------------------------[]
void extrair_dia_mes_ano(char data[], int *dia, int *mes, int *ano)
{
   sscanf(data,"%d/%d/%d",dia,mes,ano);
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
   int dia, mes, ano;
   extrair_dia_mes_ano("10/10/2019", &dia, &mes, &ano);
   testar(dia, 10);
   testar(mes, 10);
   testar(ano, 2019);
}

void caso_de_teste02(){
   int dia, mes, ano;
   extrair_dia_mes_ano("02/05/1995", &dia, &mes, &ano);
   testar(dia, 2);
   testar(mes, 5);
   testar(ano, 1995);
}

void caso_de_teste03(){
   int dia, mes, ano;
   extrair_dia_mes_ano("22/04/1500", &dia, &mes, &ano);
   testar(dia, 22);
   testar(mes, 4);
   testar(ano, 1500);
}

void caso_de_teste04(){
   int dia, mes, ano;
   extrair_dia_mes_ano("11/05/1985", &dia, &mes, &ano);
   testar(dia, 11);
   testar(mes, 5);
   testar(ano, 1985);
}

void caso_de_teste05(){
   int dia, mes, ano;
   extrair_dia_mes_ano("12/12/1975", &dia, &mes, &ano);
   testar(dia, 12);
   testar(mes, 12);
   testar(ano, 1975);
}

void caso_de_teste06(){
   int dia, mes, ano;
   extrair_dia_mes_ano("18/04/1977", &dia, &mes, &ano);
   testar(dia, 18);
   testar(mes, 4);
   testar(ano, 1977);
}

void caso_de_teste07(){
   int dia, mes, ano;
   extrair_dia_mes_ano("23/11/1977", &dia, &mes, &ano);
   testar(dia, 23);
   testar(mes, 11);
   testar(ano, 1977);
}

void caso_de_teste08(){
   int dia, mes, ano;
   extrair_dia_mes_ano("26/05/1995", &dia, &mes, &ano);
   testar(dia, 26);
   testar(mes, 5);
   testar(ano, 1995);
}

void caso_de_teste09(){
   int dia, mes, ano;
   extrair_dia_mes_ano("02/02/2007", &dia, &mes, &ano);
   testar(dia, 2);
   testar(mes, 2);
   testar(ano, 2007);
}

void caso_de_teste10(){
   int dia, mes, ano;
   extrair_dia_mes_ano("30/08/2019", &dia, &mes, &ano);
   testar(dia, 30);
   testar(mes, 8);
   testar(ano, 2019);}



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
