#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string.h>
#include <string>

using namespace std;
void printaBaralho(Cartas baralho[])  {
  for(int i = 0; i<52; i++){
    cout <<"Carta: " << i << endl;
    cout << baralho[i].getNipe() << endl;
    cout << baralho[i].getNumero() << endl;
    cout << baralho[i].getnumNipe() << endl;
    cout << baralho[i].getSimbolo() << endl;
    cout << "\n\n";  
  }
}   