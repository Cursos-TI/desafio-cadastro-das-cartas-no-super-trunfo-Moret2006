#include <stdio.h>

int main() {
/*
operadores matematematicos
soma = +
subtracao = -
multiplicacao = *
divisao = /
*/

    int n1, n2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Digite um numero:\n");
    scanf("%d", &n1);

    printf("Digite o segundo numero:\n");
    scanf("%d", &n2);

    soma = n1 + n2;
    subtracao = n1 - n2;
    multiplicacao = n1 * n2;  
    divisao = n1 / n2;

    //resultado
    printf("soma: %d \n", soma);
    printf("subtracao: %d \n", subtracao);
    printf("multipicacao: %d \n", multiplicacao);
    printf("divisao: %d", divisao); 

}