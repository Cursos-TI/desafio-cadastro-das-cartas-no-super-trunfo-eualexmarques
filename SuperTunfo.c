#include <stdio.h>

int main(){
    
    int opcao1, opcao2;
    int resultado1, resultado2;
    int pontos_turisticos;
    int Pontos_turisticos;
    int habitantes;
    int Habitantes;
    float area;
    float area2;
    float PIB;
    float PIB02;
    float densidade_populacional1;
    float densidade_populacional2;
    float PIB_percapita1;
    float PIB_percapita2;
    float quociente;
    float Quociente;
    float quociente2;
    float Quociente2;
    float SuperPoder1;
    float SuperPoder2;
    char estado [8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    char Estado [8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    char nome_cidade [20];
    char Nome_cidade [20];
    char codigo [4];
    char Codigo [4];

    printf("\n****Vamos começar o jogo Super Trufo****\n");
    //Coletamos os dados das cartas 01 e 02
    printf ("\ncarta 01\n");
    printf ("Digite o nome da cidade:\n");
    scanf ("%s", nome_cidade);
    printf ("Digite o codigo:\n");
    scanf ("%s", &codigo);
    printf ("Digite o estado:\n");
    scanf ("%s", &estado);
    printf ("Digite quantos habitantes:\n");
    scanf ("%d", &habitantes);
    printf ("Digite quantos pontos turisticos:\n");
    scanf ("%d", &pontos_turisticos);
    printf ("Digite qual a áre:\n");
    scanf ("%f", &area);
    printf ("Digite qual o PIB:\n");
    scanf ("%f", &PIB);
    quociente = (float) habitantes / area;
    Quociente = (float) PIB * 1000000000 / habitantes;
    SuperPoder1 = habitantes + area + PIB + pontos_turisticos + Quociente + (1 / quociente);

    printf ("\nCarta 02\n");
    printf ("Digite o nome da cidade:\n");
    scanf ("%s", Nome_cidade);
    printf ("Digite o codigo:\n");
    scanf ("%s", &Codigo);
    printf ("Digite o estado:\n");
    scanf ("%s", &Estado);
    printf ("Digite quantos habitantes:\n");
    scanf ("%d", &Habitantes);
    printf ("Digite quantos pontos turisticos:\n");
    scanf ("%d", &Pontos_turisticos);
    printf ("Digite qual a áre:\n");
    scanf ("%f", &area2);
    printf ("Digite qual o PIB:\n");
    scanf ("%f", &PIB02);
    quociente2 = (float) Habitantes / area2;
    Quociente2 = (float) PIB02 * 1000000000 / Habitantes;
    SuperPoder2 = Habitantes + area2 + PIB02 + Pontos_turisticos + Quociente2 + (1 / quociente2);
    
    //Agora pegamos os dados anotados e montamos as cartas

    ;printf ("\nCarta 01\n");
    
    printf ("Estado: %s\n", estado);
    printf ("Codigo: %s\n", codigo);
    printf ("Cidade: %s\n", nome_cidade);
    printf ("População: %d\n", habitantes);
    printf ("Área: %.2f\n", area);
    printf ("PIB: %.2f\n", PIB);
    printf ("Pontos turisticos: %d\n", pontos_turisticos);
    printf("Densidade populacional: %.2f\n", quociente);
    printf("PIB per capita: %.2f\n", Quociente);
    printf("Superpoder: %.2f\n", SuperPoder1);

    printf ("\nCarta 02\n");
    printf ("Cidade: %s\n", Nome_cidade);
    printf ("Codigo: %s\n", Codigo);
    printf ("Estado: %s\n", Estado);
    printf ("População: %d\n", Habitantes);
    printf ("Pontos turisticos: %d\n", Pontos_turisticos);
    printf ("Area: %.2f\n", area2);
    printf ("PIB: %.2f\n", PIB02);
    printf("Densidade populacional: %.2f\n", quociente2);
    printf("PIB per capita: %.2f\n", Quociente2);
    printf("Superpoder: %.2f\n", SuperPoder2);

    printf("\nAgora iremos comparar as cartas\n");
    printf("escolha a primeira opção:");
    scanf("%d", &opcao1);
 
    switch (opcao1)
    {
    case 1:
    printf("População %d carta 01 contra populção %d carta02 \n", habitantes, Habitantes);
     resultado1 = habitantes > Habitantes ? 1 : 0;
     break;
    case 2:
    printf("PIB %.2f carta 01 contra PIB %.2f carta02 \n", PIB, PIB02);
     resultado1 = PIB > PIB02 ? 1 : 0;
     break;
    case 3:
    printf("Area %.2f carta 01 contra area %.2f carta02\n", area, area2);
     resultado1 = area > area2 ? 1 : 0;
     break;
     printf("Opção errada!\n");
    default:
     break;
    }
     printf("Agora escolha a segunda opção:");
     scanf("%d", &opcao2);
    if (opcao1 == opcao2)
    {
     printf("escolheu a mesma opção\n");
    }else
    switch (opcao2)
     {
     case 1:
     printf("População %d carta 01 contra populção %d carta02\n", habitantes, Habitantes);
     resultado2 = habitantes > Habitantes ? 1 : 0;
         break;
     case 2:
     printf("PIB %.2f carta 01 contra PIB %.2f carta02\n", PIB, PIB02);
     resultado2 = PIB > PIB02 ? 1 : 0;
         break;
     case 3:
     printf("Area %.2f carta 01 contra area %.2f carta02\n", area, area2);
     resultado2 = area > area2 ?1 : 0;
     break;
     default:
         printf("Opção errada!\n");
         break;
     }
 
     if (resultado1 && resultado2)
     {
         printf("\ncarta 01 vence!\n");
         printf("Cidade %s\n", nome_cidade);
     }else if (resultado1 != resultado2){
         printf("\nempate!\n");
     }else{
         printf("\ncarta 02 vence!\n");
         printf("Cidade %s\n", Nome_cidade);
     }
        
        
    

    return 0;

}