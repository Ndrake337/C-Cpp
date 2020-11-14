#include<stdio.h>
#include<conio.h>


int main(void)
{
/******************* função principal (main) *********************/
  int V1, V2, resultado;
  printf("Digite o primeiro valor:");
  scanf("%d", &V1);
  printf("Digite o segundo valor:");
  scanf("%d", &V2);
  
  //chama a função e recebe o retorno
  resultado = multiplica(V1,V2);
  
  printf("Resultado da multiplicação= %d\n", resultado);
  
  getch();
  
  resultado = soma(V1,V2);
  
  printf("Resultado da soma = %d\n", resultado);
  
  getch();
  
  
  resultado = subt(V1,V2);
  
  printf("Resultado da subtação= %d\n", resultado);
  
  getch();
  
  resultado = div(V1,V2);
  
  printf("Resultado da divisão = %d\n", resultado);
  
  getch();
  
  
  getch();
  return 0;
}

//função multplica
int multiplica(int N1, int N2) //multiplica recebe N1,N2 e retorna um int
{
  int resultado;
  resultado = N1 * N2;
  return(resultado); //retornando o valor para main
}



//função soma
int soma(int N1, int N2) //SOMA recebe N1,N2 e retorna um int
{
  int resultado;
  resultado = N1 + N2;
  return(resultado); //retornando o valor para main
}


//função subtração
int subt(int N1, int N2) //SUBT recebe N1,N2 e retorna um int
{
  int resultado;
  resultado = N1 - N2;
  return(resultado); //retornando o valor para main
}

//função divisão
int div(int N1, int N2) //DIV recebe N1,N2 e retorna um int
{
  int resultado;
  resultado = N1 / N2;
  return(resultado); //retornando o valor para main
}
