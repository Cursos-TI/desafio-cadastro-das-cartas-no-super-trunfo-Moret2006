#include <stdio.h>
#include "CartasSuperTrunfo.h"

int main() {
    // Primeira carta
    char Letra;
    char Estado[10], Cod[4];
    int populacao;
    int valor;
    float km;
    float PIB;

    // Segunda carta
    char letra2;
    char estado[10], cod1[4];
    int populacao1;
    int valor1;
    float km1;
    float PIB1;

    //primeira carta
printf("Qual Estado você escolhe?\n");
scanf("%s",Estado);

printf("Digite a inical do Estado escolhido:\n");
scanf(" %c",&Letra);

printf("Digite o codigo da carta:\n");
scanf("%s",Cod); //n sei oq esta errado

printf("Quantos habitantes tem no Estado escolhido?\n");
scanf("%d",&populacao);

printf("Qual valor do PIB do Estado escolhido?\n");
scanf("%f",&PIB);

printf("Quantos KM² tem o Estado escolhido?\n");
scanf("%f",&km);

printf("Qual é o nivel do seu Estado?\n");
scanf("%d",&valor);


//segunda carta
printf("Qual Estado você escolhe?\n");
scanf("%s",estado);

printf("Digite a inical do Estado escolhido:\n");
scanf(" %c",&letra2);

printf("Digite o codigo da carta:\n");
scanf("%s",cod1); //n sei oq esta errado

printf("Quantos habitantes tem no Estado escolhido?\n");
scanf("%d",&populacao1);

printf("Qual valor do PIB do Estado escolhido?\n");
scanf("%f",&PIB1);

printf("Quantos KM² tem o Estado escolhido?\n");
scanf("%f",&km1);

printf("Qual é o nivel do seu Estado?\n");
scanf("%d",&valor1);


//primeira carta
printf("Atributos da primeira carta:\n");
printf("\n");
printf("Estado: %s\n",Estado);
printf("letra: %c\n",Letra);
printf("Codigo: %s\n",Cod);
printf("População: %d\n",populacao);
printf("PIB: %.4f\n",PIB);
printf("KM²: %.4f\n", km);
printf("Valor: %d\n",valor);
printf("\n");

//segunda carta
printf("Atributos da segunda carta:\n");
printf("\n");
printf("Estado: %s\n",estado);
printf("letra: %c\n",letra2);
printf("Codigo: %s\n",cod1);
printf("População: %d\n",populacao1);
printf("PIB: %.4f\n",PIB1);
printf("KM²: %.4f\n", km1);
printf("Valor: %d",valor1);



}