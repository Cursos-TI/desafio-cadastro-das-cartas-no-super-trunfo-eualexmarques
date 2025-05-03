#include <stdio.h>
#include <stdlib.h>

void cone(int tabuleiro[10][10], int origem_x, int origem_y) {
    for (int i = 0; i < 3; i++) {
        for (int j = -i; j <= i; j++) {
            int novo_x = origem_x + i;
            int novo_y = origem_y - j;

            // Garantir que está dentro dos limites do tabuleiro
            if (novo_x >= 0 && novo_x < 7 && novo_y >= 0 && novo_y < 7) {
                tabuleiro[novo_x][novo_y] = 5;
            }
        }
    }
}


void cruz(int tabuleiro[10][10], int origemx, int origemy){
    for (int i = -2; i <= 2; i++)
    {
        if (origemx + i >= 0 && origemx + i < 10)
        {
            tabuleiro[origemx + i][origemy] = 5;
        }if (origemy + i >= 0 && origemy + i < 10)
        {
            tabuleiro[origemx][origemy + i] = 5;
       }
        
        
    }
    
}

void octaedro(int tabuleiro[10][10], int origemx, int origemy){
    for (int i = -2; i < 2; i++)
    {
        for (int j = -1 + abs(i); j <=1 - abs(i); j++)
        {
            if (origemx + i >= 0 && origemx + i < 10 && origemy + j >= 0 && origemy + j < 10)
            {
                tabuleiro[origemx + i][origemy + j] = 5;
            }
            
        }
        
    }
    
}

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
    
    //Navio diagonal1
    tabuleiro[0][3] = 3;
    tabuleiro[1][4] = 3;
    tabuleiro[2][5] = 3;
    
    //Navio diagonal2
    tabuleiro[8][6] = 3;
    tabuleiro[7][7] = 3;
    tabuleiro[6][8] = 3;

    //Aplicando habilidadades
    cruz(tabuleiro, 2, 7);
    octaedro(tabuleiro, 7, 4);
    cone(tabuleiro, 2, 2);
    

    //Numerando as linhas e as colunas 
   for ( i = 0; i < 10; i++)
   {
    printf(" %2d|", i + 1);
    for ( j = 0; j < 10; j++)
   {
    printf(" %d ", tabuleiro[i][j]);
   }
   printf("\n");
   }

}

    