#include <stdio.h>
#include "CartasSuperTrunfo.h"

int main() {
/* 
estado = Letra incial do Estado.
Ex: Maranhão = M

cc = codigo da carta 
Obs1: o codigo da carta deve começar com a letra do "estado" e em seguida um numero.
Obs2: o codigo da carta só poderar ter no maxímo 3 caracterizes. 
Ex: M01

nc = nome da carta.
ex: Maranhão

populacao = numero de habitantes no Estado.
Ex: Maranhão = 120.000

Valor = Nivel de poder da carta.
Ex: Maranhão = 100

Km = tamanho do estado.
Ex: Maranhão = 230.000

PIB = Produto0 Interno bruto.
Ex: Maranhão = 120.000
*/

//primeira carta.
    char estado;
    char nc[10],cod[3];
    int populacao;
    int valor;
    float km;
    float PIB;
//Segunda carta.
    char estado1;
    char nc1[10],cod1[3];
    int populacao1;
    int valor1;
    float km1;
    float PIB1;

//Primeira carta
    printf("Escolha o nome do seu Estado:\n");
    scanf("%s", nc);
    
    printf("Digite a inicial do seu Estado:\n" );
    scanf("%c\n", &estado);

    printf("Digite o codigo da sua carta:\n");
    scanf("%s", cod);
    scanf("%s", cod);
         
    printf("Qual é a quantidade de habitantes da seu Estado?:\n");
    scanf("%d", &populacao);

    printf("Qual é o tamanho da area do seu Estado?:\n" );
    scanf("%f", &km);

    printf("Qual é o valor do PIB da sua carta?:\n");
    scanf("%f", &PIB);

    printf("Digite o Nivel de poder da sua carta:\n");
    scanf("%d", &valor);

//segunda carta
printf("Agora vamos cadastrar a segunda carta!\n");

    printf("Escolha o nome do seu Estado:\n");
    scanf("%s", nc1);
    
    printf("Digite a inicial do seu Estado:\n" );
    scanf("%c\n", &estado1);

    printf("Digite o codigo da sua carta:\n");
    scanf("%s", cod1);
    scanf("%s", cod1);
         
    printf("Qual é a quantidade de habitantes da seu Estado?:\n");
    scanf("%d", &populacao1);

    printf("Qual é o tamanho da area do seu Estado?:\n" );
    scanf("%f", &km1);

    printf("Qual é o valor do PIB da sua carta?:\n");
    scanf("%f", &PIB1);
    
    printf("Digite o Nivel de poder da sua carta:\n");
    scanf("%d", &valor1);


printf("Primeira carta!\n");
    printf("Numero da carta : %s\n Letra do seu estado: %c\n", nc, estado);
    printf("Codigo da carta: %s\n", cod);
    printf("Quantidade de habitantes:%d\n", populacao);
    printf("Km²: %.4f\n", km);
    printf("Produto interno bruto: %.4f\n", PIB);
    printf("Valor da carta: %d\n", valor);
    



return 0;













}
