#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*DECLARAÇÃO DAS VARIAVEIS
	"salario": valor equivalente ao salario bruto
	"reajuste": variavel utilizada para calcular a porcentagem de imposto em cima do salario bruto
	"salarioL": variavel utilizada para definir o valor so salario após o pagamento do imposto
	"imposto": variavel que calcula o valr em reais do imposto a ser pago 
	*/
	float salario, reajuste, salarioL, imposto;
	printf("Este e um programa que recebe o salario bruto de um funcionario e inidica a porcentagem de imposto a pagar  \n\n");
	printf("Indique o salario Bruto do funcionario: "); scanf("%f", &salario);printf("\n\n"); //informa o salario bruto
	
	//define o que ocorre caso o salario seja MENOR OU IGUAL a 1000.00
	if(salario<=1000.00){
		reajuste = (salario * 0.05);//calcula a porcentagem do reajuste 
		salarioL = (salario - reajuste);//calcula o salario liquido final
		imposto = (salario - salarioL);// calcula o valor em reais do imposto
		printf("Seu salario bruto e de:R$ %.2f e deve ser pago um reajuste de 5 porcento tornando o valor do salario liquido %2.f \n\n", salario, salarioL);//printa o valor do salario após o pagament do imposto
		printf("O valor do imposto pago e de R$ %.2f", imposto);//indica o valor do imposto pago
	}
	
		else if(salario>=1000.00){
			reajuste = (salario * 0.10);//calcula a porcentagem do reajuste 
			salarioL = (salario - reajuste);//calcula o salario liquido final
			imposto = (salario - salarioL);// calcula o valor em reais do imposto
			printf("Seu salario bruto e de:R$ %.2f e deve ser pago um reajuste de 10 porcento tornando o valor do salario liquido após o pagamento do imposto de: R$ %2.f \n\n", salario, salarioL);//printa o valor do salario após o pagament do imposto
			printf("O valor do imposto pago e de R$ %.2f", imposto);//indica o valor do imposto pago
	
		}
	getch();
	return 0;
}
