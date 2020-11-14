#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(int argc, char *argv[]){
  setlocale(LC_ALL, "Portuguese");
  
  int taxa, selo5=5, selo3=3, x, r;
  
  printf("Este Programas calcula a quantia minima de selos de 3 e 5 centavos que o cliente precisa comprar baseado na taxa que for informada\n\nInsira a taxa: "); scanf("%d", &taxa); // obtem a taxa do selo  
  
  r = taxa%selo5; //calcula o resto da divisão da taxa pelo selo
  
  //verifica a taxa minima de selos possiveis definida como 8 
  if(taxa >=8){ 
     
     //calcula pelo resto da divisão o valor da taxa para os selosquando o resto vale 0
     if(r == 0){
        x = taxa/selo5;
        printf("A você vai precisar de %d selos", x);
     }
     
     //calcula pelo resto da divisão o valor da taxa para os selosquando o resto vale 1
     else if(r == 1){
        x = (taxa - 5)/selo3;
        printf("\nA você vai precisar de 1 selo de R$0,05 e %d selos de R$0,03", x);
     }
     
     //calcula pelo resto da divisão o valor da taxa para os selosquando o resto vale 2
     else if(r == 2){
        x = (taxa - 12)/selo5;
        printf("\nA você vai precisar de 4 selos de R$0,03 e de %d selos R$0,05", x);
     }
     
     //calcula pelo resto da divisão o valor da taxa para os selosquando o resto vale 3
     else if(r == 3){
        x = (taxa-3)/5;
        printf("\nA você vai precisar de 1 selos de R$0,03 e de %d selos R$0,05", x);
     }
     
     //calcula pelo resto da divisão o valor da taxa para os selosquando o resto vale 4
     if(r == 4){
        x = (taxa-9)/selo5;
        printf("\nA você vai precisar de 3 selos de R$0,03 e de %d selos R$0,05", x);
     }
   }
   
   //caso a taxa de selos seja menor do que 8 a taxa é negada e retorna esta informação ao usuario
   else{
      printf("A taxa inserida não é valida, reinicie o programa e insira uma taxa igual ou maior que 8");
   }
  return 0;
}
