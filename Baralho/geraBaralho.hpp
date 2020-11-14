#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

void geraBaralho(Cartas baralho[]){
  int m =1, j = 1,k = 1,l = 1;
  char espadas = 6, copas = 3, paus = 5, ouros = 4;
    for(int i=0; i<=52; i++){
      if(i>=0&&i<13){
        baralho[i].setNumero(m);
        baralho[i].setNipe("Espadas");//♠️ - Preto
        baralho[i].setnumNipe(1);
        baralho[i].setSimbolo(espadas);
        m++;
      }  
      else if(i>12&&i<26){
        baralho[i].setNumero(j);
        baralho[i].setNipe("Copas");//♥️ - vermelho
        baralho[i].setnumNipe(2);
        baralho[i].setSimbolo(copas);
        j++;
      }
      else if(i>25&&i<39){
        baralho[i].setNumero(k);
        baralho[i].setNipe("Paus");//♣ - preto
        baralho[i].setnumNipe(3);
        baralho[i].setSimbolo(paus);
        k++;
      }
      else if(i>37&&i<52){
        baralho[i].setNumero(l);
        baralho[i].setNipe("Ouros");//♦️ - vermelho
        baralho[i].setnumNipe(4);
        baralho[i].setSimbolo(ouros);
        l++;
      }    
    }
}