#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string.h>
#include <cstring>


using namespace std;

void menu(){
  string deseja; 
  int i = 0;
  cout<<endl;
  cout<<"**********************************************************************"<<endl;
  cout<<"*******               ###PACIENCIA SOLITAIRE###                *******"<<endl;
  cout<<"**********************************************************************"<<endl;
  cout << "\n\nDeseja Jogar ? Digite S para sim N para não:" << endl;
  cin >> deseja;
  while (i == 0){
    if(deseja == "S" || deseja == "s"){
      cout << "Jogo Iniciando \n" << endl;
      system("cls"); //limpa tela do programa no windows
      system("clear"); //limpa tela do programa no linux 
      i++;
    }
    else if(deseja == "N" || deseja == "n"){
      cout << "Fechando o Jogo" <<endl;
      exit(0); //fecha o programa
      i++; 
    }
    else{
      cout << "Insira uma opção valida: ";
      cin >> deseja;
      i=0;
    }
  }
}