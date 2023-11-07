#include "Header.h"

void print(char val[]){
    int len =  strlen(val);

    for (int i = 0; i < len; i++)
    {
        printf("%c",val[i]);
        Sleep(200);
    }
}

void printmatrice(int mat[SIZE][SIZE]){
    for (int i = 0; i < SIZE; i++)
    {
       for (int j = 0; j < SIZE; j++)
       {
        printf("%d",mat[i][j]);
       }
       printf("\n");
       
    }
    
}