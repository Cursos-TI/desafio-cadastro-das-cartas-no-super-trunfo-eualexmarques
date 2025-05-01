#include <stdio.h>

int main(){

    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];
    int i, j;

    //Exibição das lestras de A a J nas colunas
    printf("     ");
    for ( j = 0; j < 10; j++)
    {
       printf("%c  ", linha[j]);
    }
    printf("\n");

    //Colocando o Mar representando com o valor 0
    for ( i = 0; i < 10; i++)
    { for (j = 0; j < 10; j++){

            tabuleiro[i][j] = 0;

        }
        
    }

    //Navio horizontal
    for (int i = 1; i < 4; i++)
    {
        tabuleiro[i][1] = 3;
    }

    //Navio vertical
    for (int j = 4; j < 7; j++)
    {
        tabuleiro[4][j] = 3;
    }
    
    //Navio horizontal1
    for (int i = 0; i < 1; i++)
    {
        tabuleiro[i][3] = 3;
        
        for (int i = 1; i < 2; i++)
    {
        tabuleiro[i][4] = 3;
        for (int i = 2; i < 3; i++)
        {
            tabuleiro[i][5] = 3;
        }
        
    }   
    }

    //Navio horizontal2
    for (int j = 6; j < 7; j++)
    {
        tabuleiro[8][j] = 3;
        for (int j = 7; j < 8; j++)
    {
        tabuleiro[7][j] = 3;
        for (int j = 8; j < 9; j++)
    {
        tabuleiro[6][j] = 3;
    }
    }
    }

    //Numerando as linhas e as colunas 
   for ( j = 0; j < 10; j++)
   {
    printf(" %2d|", j + 1);
    for ( i = 0; i < 10; i++)
   {
    printf(" %d ", tabuleiro[i][j]);
   }
   printf("\n");
   }

}

    