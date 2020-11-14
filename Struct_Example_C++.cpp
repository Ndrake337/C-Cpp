/*
Alocação dinamica de Structs
Feito por: Matheus Felipe
Engenharia de computação
3ºsemestre
*/

//declarando bibliotecas
#include <iostream> 
#include <string> 
#include <sstream> 

//definindo namespace std para bibliotecas do C 
using namespace std;

//definindo a struct
struct filmeStr { 
  string titulo; 
  int ano; 
}; 

//declarando a função imprimeFilme
void imprimeFilme (filmeStr filme); 

int main (){ 
  //Declarando um ponteiro para filmeStr
  filmeStr  *filmes;
  string minhaString;
  
  //obtendo o tamanho da string
  int tamanho;
  cout<<"Determine a quantia de filmes";
  cin>>tamanho;

  //limpando o buffer do teclado
  cin.clear(); // unset failbit
  cin.ignore(); // skip bad input 
  
  //realizando a alocação
  filmes = new filmeStr[tamanho];
  int n; 
  
  //obtendo valores de filmes e ano
  for (n= 0 ; n< tamanho ; n++){ 
    cout <<  "Entre titulo: " ; 
    getline (cin,filmes[n].titulo);

    cout <<  "Entre ano: " ; 
    getline (cin,minhaString); 
    stringstream(minhaString) >> filmes[n].ano; 
} 

//printando filmes
cout<< "\nVoce entrou com os seguintes filmes:\n" ; 
for (n= 0 ; n< tamanho ; n++){ 
  imprimeFilme(filmes[n]); 
} 

//deletando filmes após seu uso 
delete[] filmes;

return 0; 
} 

//função para printar filmes
void imprimeFilme(filmeStr filme){ 
    cout << filme.titulo; 
    cout <<" (" << filme.ano <<  ")\n" ; 
} 
  