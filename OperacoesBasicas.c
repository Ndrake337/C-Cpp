#include<stdio.h>
#include<conio.h>


int main(void)
{
/******************* fun��o principal (main) *********************/
  int V1, V2, resultado;
  printf("Digite o primeiro valor:");
  scanf("%d", &V1);
  printf("Digite o segundo valor:");
  scanf("%d", &V2);
  
  //chama a fun��o e recebe o retorno
  resultado = multiplica(V1,V2);
  
  printf("Resultado da multiplica��o= %d\n", resultado);
  
  getch();
  
  resultado = soma(V1,V2);
  
  printf("Resultado da soma = %d\n", resultado);
  
  getch();
  
  
  resultado = subt(V1,V2);
  
  printf("Resultado da subta��o= %d\n", resultado);
  
  getch();
  
  resultado = div(V1,V2);
  
  printf("Resultado da divis�o = %d\n", resultado);
  
  getch();
  
  
  getch();
  return 0;
}

//fun��o multplica
int multiplica(int N1, int N2) //multiplica recebe N1,N2 e retorna um int
{
  int resultado;
  resultado = N1 * N2;
  return(resultado); //retornando o valor para main
}



//fun��o soma
int soma(int N1, int N2) //SOMA recebe N1,N2 e retorna um int
{
  int resultado;
  resultado = N1 + N2;
  return(resultado); //retornando o valor para main
}


//fun��o subtra��o
int subt(int N1, int N2) //SUBT recebe N1,N2 e retorna um int
{
  int resultado;
  resultado = N1 - N2;
  return(resultado); //retornando o valor para main
}

//fun��o divis�o
int div(int N1, int N2) //DIV recebe N1,N2 e retorna um int
{
  int resultado;
  resultado = N1 / N2;
  return(resultado); //retornando o valor para main
}
