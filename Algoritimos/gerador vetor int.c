
#include<stdio.h>
#include<stdlib.h>
#include <windows.h>
#include <time.h>

#define N 5000

void gerador(int v[], int n){

    srand(time(NULL));
    for (int i = 0; i < n; i++){
       v[i] = rand(); 
    }
}

int v[N];