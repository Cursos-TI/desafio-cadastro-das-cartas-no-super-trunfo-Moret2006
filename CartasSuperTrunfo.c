#include <stdio.h>
#include "CartasSuperTrunfo.h"

int main() {
/* 
estado = Letra incial do Estado/País.
Ex: Maranhão = M

cc = codigo da carta 
Obs1: o codigo da carta deve começar com a letra do "estado" e em seguida um numero.
Obs2: o codigo da carta só poderar ter no maxímo 3 caracterizes. 
Ex: M01

nc = nome da carta.
ex: Maranhão

populacao = numero de habitantes no Estado/País.
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
    char nc1[10], cc1[5];
    int populacao1;
    int valor1;
    float km1;
    float PIB1;


    printf("Escolha o nome do seu Estado ou País:\n");
    scanf("%s",nc);
    
    printf("Digite a inicial do seu Estado:\n" );
    scanf("%c\n",&estado);

    printf("Digite o codigo da sua carta:\n");
    scanf("%s",cod);
    scanf("%s",cod);
        printf("sdasda %s",cod);//apagar essa linha 
    printf("Qual é a quantidade de habitantes da seu Estado ou País?:\n");
    scanf("%f",populacao);
}
