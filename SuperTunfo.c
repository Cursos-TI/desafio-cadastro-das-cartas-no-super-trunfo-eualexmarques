#include <stdio.h>

int main(){

    int pontos_turisticos;
    int Pontos_turisticos;
    int habitantes;
    int Habitantes;
    float area;
    float area02;
    float PIB;
    float PIB02;
    float quociente;
    float Quociente;
    float quociente2;
    float Quociente2;
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
    
    //Agora pegamos os dados anotados e montamos as cartas

    ;printf ("Carta 01\n");
    
    printf ("Estado: %s\n", estado);
    printf ("Codigo: %s\n", codigo);
    printf ("Cidade: %s\n", nome_cidade);
    printf ("População: %d\n", habitantes);
    printf ("Área: %.2f\n", area);
    printf ("PIB: %.2f\n", PIB);
    printf ("Pontos turisticos: %d\n", pontos_turisticos);
    quociente = (float) habitantes / area;
    printf("Densidade populacional: %.2f\n", quociente);
    Quociente = (float) PIB / habitantes;
    printf("PIB per capita: %.2f\n", Quociente);

    printf ("Carta 02\n");
    printf ("Cidade: %s\n", Nome_cidade);
    printf ("Codigo: %s\n", Codigo);
    printf ("Estado: %s\n", Estado);
    printf ("População: %d\n", Habitantes);
    printf ("Pontos turisticos: %d\n", Pontos_turisticos);
    printf ("Area: %.2f\n", area02);
    printf ("PIB: %.2f\n", PIB02);
    quociente2 = (float) Habitantes / area02;
    printf("Densidade populacional: %.2f\n", quociente2);
    Quociente2 = (float) PIB02 / Habitantes;
    printf("PIB per capita: %.2f\n", Quociente2);


    return 0;

}