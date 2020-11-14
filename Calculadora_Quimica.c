#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include <locale.h>

void clear(){
	
		#if defined WIN32 || defined WIN64
    		system("cls"); //Clears a linux console screen
		#else
    		system("clear"); //Clears a windows console screen
		#endif

	
}

int main(int argc, char *argv[])
 {
 	
 	while(1){
 		
 		clear();
 		
 		setlocale(LC_ALL, "Portuguese");//habilita a acentuação e caracteres epeciais para o português
 		
		int info, escolha;
		float T, P, ppm, V, C;                                              
		printf("+=======================================================================================================+\n");
		printf("|                                 Caltuladora PPM para MG/M^3                                           |\n");
		printf("|Feita por:                                                                                             |\n|Eric Kei                                                                                               |\n|Joao Luiz                                                                                              |\n|Matheus Felipe                                                                                         |\n|Rafael Prado                                                                                           |\n");
		printf("+=======================================================================================================+\n");
		printf("Este programa calcula ppm a partir de sua concentração e vice-versa, utilizando a pressão e temperatura\n\n");
		printf("Digite 1 caso queira informar em ppm \nDigite 2 para informar a concentracao em mg/m^3\n\n");
	    printf("Digite a opção desejada: "); scanf("%d", &info); printf("\n");
		printf("+=======================================================================================================+\n");
		if(info==1)
		{
			printf("Você escolheu informar em ppm.\n");
			printf("Agora informe o numeral correspondente ao gas desejado:\n\n 1--CO\n 2--CO2\n 3--SO2\n 4--SO3\n 5--CH4\n\n");
			printf("Digite qual o gás desejado: "); scanf("%d", &escolha); printf("\n");
			
			if(escolha==1)
			{
			  	printf("+=======================================================================================================+\n");
				printf("Voce escolheu CO\n");
				printf("Informe a temperatura (em graus celcius) em que o gás se encontra: ");
				scanf("%f", &T);
				printf("Agora a pressão (em atm) que atua sobre ele: ");
				scanf("%f", &P);
				printf("E por ultimo sua quantidade em ppm: ");
				scanf("%f", &ppm);
				V = (0.082 * (T + 273.15)) / P;
				C = (ppm * 28.01) / V;
				printf("\nA concentração do gás indicado e: %.2f mg/m^3 \n", C);	
			}
			else
			{
				if(escolha==2)
				{
				printf("+=======================================================================================================+\n");
				printf("Voce escolheu CO2\n");
				printf("Informe a temperatura (em graus celcius) em que o gás se encontra: ");
				scanf("%f", &T);
				printf("Agora a pressão (em atm) que atua sobre ele: ");
				scanf("%f", &P);
				printf("E por ultimo sua quantidade em ppm: ");
				scanf("%f", &ppm);
				V = (0.082 * (T + 273.15)) / P;
				C = (ppm * 44.01) / V;
				printf("\nA concentração do gás indicado e: %.2f mg/m^3 \n", C);	
				}
				else
				{
					if(escolha==3)
					{
						printf("+=======================================================================================================+\n");
						printf("Você escolheu SO2\n");
						printf("Informe a temperatura (em graus celcius) em que o gás se encontra: ");
						scanf("%f", &T);
						printf("Agora a pressão (em atm) que atua sobre ele: ");
						scanf("%f", &P);
						printf("E por ultimo sua quantidade em ppm: ");
						scanf("%f", &ppm);
						V = (0.082 * (T + 273.15)) / P;
						C = (ppm * 64.07) / V;
						printf("\nA concentração do gás indicado e: %.2f mg/m^3 \n", C);
					}
					else
					{
						if(escolha==4)
						{
							printf("+=======================================================================================================+\n");
							printf("Voce escolheu SO3\n");
							printf("Informe a temperatura (em graus celcius) em que o gás se encontra: ");
							scanf("%f", &T);
							printf("Agora a pressão (em atm) que atua sobre ele: ");
							scanf("%f", &P);
							printf("E por ultimo sua quantidade em ppm: ");
							scanf("%f", &ppm);
							V = (0.082 * (T + 273.15)) / P;
							C = (ppm * 80.07) / V;
							printf("\nA concentração do gás indicado e: %.2f mg/m^3 \n", C);
						}
						else
						{
							if(escolha==5)
							{
								printf("+=======================================================================================================+\n");
								printf("Voce escolheu CH4\n");
								printf("Informe a temperatura (em graus celcius) em que o gás se encontra: ");
								scanf("%f", &T);
								printf("Agora a pressão (em atm) que atua sobre ele: ");
								scanf("%f", &P);
								printf("E por ultimo sua quantidade em ppm: ");
								scanf("%f", &ppm);
								V = (0.082 * (T + 273.15)) / P;
								C = (ppm * 16.042) / V;
								printf("\nA concentração do gás indicado e: %.2f mg/m^3 \n", C);
							}			
						}
					}
				}
			}
		}
		else
		{
			if(info==2)
			{
				printf("Voce escolheu informar em mg/m^3.\n");
				printf("Agora informe o numeral correspondente ao gás desejado:\n\n 1--CO\n 2--CO2\n 3--SO2\n 4--SO3\n 5--CH4\n\n");
				printf("Digite qual o gás desejado: "); scanf("%d", &escolha); printf("\n");
			}
			if(escolha==1)
			{
				printf("+=======================================================================================================+\n");
				printf("Você escolheu CO\n");
				printf("Informe a temperatura (em graus celcius) em que o gás se encontra: ");
				scanf("%f", &T);
				printf("Agora a pressão (em atm) que atua sobre ele: ");
				scanf("%f", &P);
				printf("E por ultimo sua concentração em mg/m^3: ");
				scanf("%f", &C);
				V = (0.082 * (T + 273.15)) / P;
				ppm = (V * C) / 28.01;
				printf("\nOs dados indicados representam: %.2f ppm \n", ppm);	
			}
			else
			{
				if(escolha==2)
				{
					printf("+=======================================================================================================+\n");
					printf("Voce escolheu CO2\n");
					printf("Informe a temperatura (em graus celcius) em que o gás se encontra: ");
					scanf("%f", &T);
					printf("Agora a pressão (em atm) que atua sobre ele: ");
					scanf("%f", &P);
					printf("E por ultimo sua concentração em mg/m^3: ");
					scanf("%f", &C);
					V = (0.082 * (T + 273.15)) / P;
					ppm = (V * C) / 44.01;
					printf("\nOs dados indicados representam: %.2f ppm \n", ppm);	
				}
				else
				{
					if(escolha==3)
					{
						printf("+=======================================================================================================+\n");
						printf("Voce escolheu SO2\n");
						printf("Informe a temperatura (em graus celcius) em que o gás se encontra: ");
						scanf("%f", &T);
						printf("Agora a pressão (em atm) que atua sobre ele: ");
						scanf("%f", &P);
						printf("E por ultimo sua concentração em mg/m^3: ");
						scanf("%f", &C);
						V = (0.082 * (T + 273.15)) / P;
						ppm = (V * C) / 64.07;
						printf("\nOs dados indicados representam: %.2f ppm \n", ppm);	
					}
					else
					{
						if(escolha==4)
						{
							printf("+=======================================================================================================+\n");
							printf("Voce escolheu SO3\n");
							printf("Informe a temperatura (em graus celcius) em que o gás se encontra: ");
							scanf("%f", &T);
							printf("Agora a pressão (em atm) que atua sobre ele: ");
							scanf("%f", &P);
							printf("E por ultimo sua concentração em mg/m^3: ");
							scanf("%f", &C);
							V = (0.082 * (T + 273.15)) / P;
							ppm = (V * C) / 80.07;
							printf("\nOs dados indicados representam: %.2f ppm \n", ppm);	
						}
						else
						{
							if(escolha==5)
							{
							printf("+=======================================================================================================+\n");
							printf("Voce escolheu CH4\n");
							printf("Informe a temperatura (em graus celcius) em que o gás se encontra: ");
							scanf("%f", &T);
							printf("Agora a pressão (em atm) que atua sobre ele: ");
							scanf("%f", &P);
							printf("E por ultimo sua concentração em mg/m^3: ");
							scanf("%f", &C);
							V = (0.082 * (T + 273.15)) / P;
							ppm = (V * C) / 16.042;
							printf("\nOs dados indicados representam: %.2f ppm \n", ppm);	
							}
						}	
					}
				}
			}	
		}
		getch();
	}
	return 0;
}
