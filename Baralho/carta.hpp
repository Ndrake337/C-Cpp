#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;
class Cartas{
  private:
    int numero;
    string nipe;
    int numNipe;
    char simbolo;
  public:
    void setNumero(int numero){
      this ->numero = numero;
    }
    void setNipe(string nipe){
      this ->nipe = nipe;
    }
    void setnumNipe(int numNipe){
      this ->numNipe = numNipe;
    }
    void setSimbolo(char simbolo){
      this ->simbolo = simbolo;
    }
    string getNipe(){
      return nipe;
    }
    int getNumero(){
      return numero;
    }
    int getnumNipe(){
      return numNipe;
    }
    char getSimbolo(){
      return simbolo;
    }
};