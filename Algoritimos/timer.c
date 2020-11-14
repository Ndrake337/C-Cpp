
#include<stdio.h>
#include<stdlib.h>
#include <windows.h>
#include <time.h>

int main()
{    
    clock_t start_t, end_t, total_t;
    start_t = clock();
    int i;

    printf("inicializando o loop / programa\n");

    //COLOQUE O CODIGO AQUI!!!!!!!

    end_t = clock();
    printf("End of the big loop, end_t = %ld ms\n", end_t);



    return 0;
}