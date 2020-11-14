#include <iostream>
#include <cstdio>

using namespace std;


int main() {

//aloca matriz
int **matriz;
int linha;
int coluna;
cout<<"determine o valor das linhas: ";
cin>>linha;
cout<<"determine o valor das colunas:";
cin>>coluna;
matriz = new int *[linha];

for (int contador = 0; contador<linha; contador++){
  matriz[contador] = new int[coluna];
}

cout<<"\nagora entre com os elementos da matriz";
//da valores a matriz
for(int i = 0; i< linha; i++){
  for(int j=0; j<coluna; j++){
    cout<< "\nLinha"<< (i+1) << " Coluna " << (j+1) << " : ";
    cin>>*(*(matriz + i)+j); 
  }
}

cout<<"\n";

for(int i = 0; i< linha; i++){
  for(int j=0; j<coluna; j++){
    cout<<matriz[i][j]<<"\t";
  }
  cout<<"\n";
}

for(int contador = 0; contador<linha; contador++){
  delete[] matriz[contador];
}
delete[] matriz;
}