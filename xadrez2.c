#include <stdio.h>
    //Movimento torre
    void recursivo (int torre){
        if (torre > 0)
        {
            printf("Direita\n");
            recursivo (torre - 1);
        }
        
    }
    //Movimento rainha
    void recursivo2 (int rainha){
        if (rainha > 0)
        {
            printf("Equerda\n");
            recursivo2 (rainha - 1);
        }
        
    }
    //Movimetno bispo
    void recursivo3 (int bispo){
        if (bispo > 0)
        {
            printf("Cima\n");
            recursivo3 (bispo - 1);
            
        
        }
        
        
    }


int main(){

    //Movimento torre
    int quantidade = 5;
    recursivo (quantidade);

    //Movimento rainha
    int quantidade2 = 8;
    recursivo2 (quantidade2);

    //Movimento bispo
    int quantidade3 = 5;
    recursivo3 (quantidade3);
    for (int i = 0; i < 5; i++)
        {
            printf("Direita\n");
 
        }
    
    //Movimentando o cavalo duas casas cima e uma direita
        int i = 0;
    do
    {
        for (int i2 = 0, j = 3; i2 < j; i2++, j--)
        {
            printf("Cima\n");
        }
        
        printf("Direita\n");
        i++;
    } while (i < 1);
    
    


}