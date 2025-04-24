#include <stdio.h>

int main(){

    int i = 0;
    int i2= 0;

    //Mover a torre cinco casas para direita
    while (i < 5)
    {
        printf("Direita\n");//O movimento de casas
        i++;
    }

   //Mover o bispo cinco casas para cima direita
   do
   {   
       printf("Cima, direta\n");
       i2++;
   } while (i2 < 5);
    
    //Mover a rainha oito casas para a esquerda

    for ( i = 0; i < 8; i++)
    {
        printf("Esquerda\n");
    }
    


}