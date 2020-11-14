#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <locale.h>
#include <stack>

using namespace std;

#include "carta.hpp"
#include "geraBaralho.hpp"
#include "printaBaralho.hpp"
#include "menu.hpp"




int main() {
  setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
  srand (time(NULL)); //define tempo para numeros aleatórios como Nulo
  //menu();
  Cartas baralho[52];
  geraBaralho(baralho);
  //printaBaralho(baralho);

  int elem[28],options[52],temp;
  Cartas aux[24];
  for(int j = 0; j<52;j++){
    options[j] = j;
  }
  for(int i = 0; i<28;i++){
    temp = rand() %52+1;
    for(int j=0; j<28; j++){
      if(elem[j] == temp){
        temp = rand() %52+1;
        i--;
        j=0;
      }
      if(elem[j] != temp && j == 27){
        elem[i] = temp;
      }
    }
  }
  
  stack <Cartas> pilha1;
  stack <Cartas> pilha2;
  stack <Cartas> pilha3;
  stack <Cartas> pilha4;
  stack <Cartas> pilha5;
  stack <Cartas> pilha6;
  stack <Cartas> pilha7;
  stack <Cartas> Descarte1;
  stack <Cartas> Descarte2;
  stack <Cartas> Descarte3;
  stack <Cartas> Descarte4;
  stack <Cartas> Baralho;

  for(int i=0; i<28; i++){
    for(int j= 0; j<52; j++){
      if(elem[i] == elem[i]){
        if(pilha1.size() != 1 && i == 0){
          pilha1.push(baralho[elem[i]]);
        }
        else if(pilha2.size() != 2 && i>0 && i<3){
          pilha2.push(baralho[elem[i]]);
        }
        else if(pilha3.size() != 3 && i>2 && i<6){
          pilha3.push(baralho[elem[i]]);
        }
        else if(pilha4.size() != 4 && i>5 && i<10){
          pilha4.push(baralho[elem[i]]);
        }
        else if(pilha5.size() != 5 && i>9 && i<15){
          pilha5.push(baralho[elem[i]]);
        }
        else if(pilha6.size() != 6 && i>14 && i<21){
          pilha6.push(baralho[elem[i]]);
        }
        else if(pilha7.size() != 7 && i>20 && i<28){
          pilha7.push(baralho[elem[i]]);
        }
      }
    }
  }

  int contador = 0;
  for(int i = 0; i < 52; i++) {
     for(int j = 0; j < 28; j++) {
      if(baralho[i].getNumero() == elem[j]){
        baralho[i].setNumero(-1);
        j++;
      }
    }
  }

  for(int i=0; i<52; i++){
    if(baralho[i].getNumero() != -1){
      Baralho.push(baralho[i]);
    }
    if(baralho[i].getNumero() == -1){
      contador ++;
    }
  }

  cout << contador << endl; 

  cout<<"Tamalho da Pilha 1: "<< pilha1.size()<<endl; 
  cout<<"Tamalho da Pilha 2: "<< pilha2.size()<<endl; 
  cout<<"Tamalho da Pilha 3: "<< pilha3.size()<<endl; 
  cout<<"Tamalho da Pilha 4: "<< pilha4.size()<<endl; 
  cout<<"Tamalho da Pilha 5: "<< pilha5.size()<<endl; 
  cout<<"Tamalho da Pilha 6: "<< pilha6.size()<<endl; 
  cout<<"Tamalho da Pilha 7: "<< pilha7.size()<<endl; 

  cout<<"Tamalho da Pilha Baralho: "<< Baralho.size()<<endl; 

  system("Pause");
}

  
