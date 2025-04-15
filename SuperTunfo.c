#include <stdio.h>

int main(){

    int pontos_turisticos;
    int Pontos_turisticos;
    int habitantes;
    int Habitantes;
    int resultadopopulacao, resultadoarea, resultadopib, resultadopontosturisticos, 
    resultadodensidadepopulacional, resultadopibpercapita, resultadosuperpoder;
    float area;
    float area02;
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

    printf ("carta 01\n");
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
    Quociente = (float) PIB / habitantes;
    SuperPoder1 = habitantes + area + PIB + pontos_turisticos + Quociente + (1 / quociente);

    printf ("Carta 02\n");
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
    scanf ("%f", &area02);
    printf ("Digite qual o PIB:\n");
    scanf ("%f", &PIB02);
    quociente2 = (float) Habitantes / area02;
    Quociente2 = (float) PIB02 / Habitantes;
    SuperPoder2 = Habitantes + area02 + PIB02 + Pontos_turisticos + Quociente2 + (1 / quociente2);
    
    //Agora pegamos os dados anotados e montamos as cartas

    ;printf ("Carta 01\n");
    
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

    printf ("Carta 02\n");
    printf ("Cidade: %s\n", Nome_cidade);
    printf ("Codigo: %s\n", Codigo);
    printf ("Estado: %s\n", Estado);
    printf ("População: %d\n", Habitantes);
    printf ("Pontos turisticos: %d\n", Pontos_turisticos);
    printf ("Area: %.2f\n", area02);
    printf ("PIB: %.2f\n", PIB02);
    printf("Densidade populacional: %.2f\n", quociente2);
    printf("PIB per capita: %.2f\n", Quociente2);
    printf("Superpoder: %.2f\n", SuperPoder2);

    resultadopopulacao = habitantes > Habitantes;
    resultadoarea = area > area02;
    resultadopib = PIB > PIB02;
    resultadopontosturisticos = pontos_turisticos > Pontos_turisticos;
    resultadodensidadepopulacional = quociente < quociente2;
    resultadopibpercapita = Quociente > Quociente2;
    resultadosuperpoder = SuperPoder1 > SuperPoder2;

    printf("\n Duelo de cartas\n");
    printf("\nO numero 1 representa a carta01, o numero 0 representa a carta02\n");
    printf("A maior população é da carta: %d\n", resultadopopulacao);
    printf("A maior área é da carta: %d\n", resultadoarea);
    printf("O maior PIB é da carta: %d\n", resultadopib);
    printf("A carta com maior número de pontos turisticos é a carta: %d\n", resultadopontosturisticos);
    printf("A menor densidade populacional pertence a carta: %d\n", resultadodensidadepopulacional);
    printf("O maior PIB per capita pertence a carta: %d\n", resultadopibpercapita);
    printf("O Superpoder que é a soma de todas as estatisticas da carta pertence a carta: %d\n", resultadosuperpoder);



    return 0;

}