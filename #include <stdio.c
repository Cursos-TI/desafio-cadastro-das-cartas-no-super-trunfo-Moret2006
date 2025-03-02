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
    int soma, subtracao, multiplicacao;
    float divisao;
    printf("Digite um numero:\n");
    scanf("%d", &n1);

    printf("Digite o segundo numero:\n");
    scanf("%d", &n2);

    soma = n1 + n2;
    subtracao = n1 - n2;
    multiplicacao = n1 * n2;  
    divisao = (float) n1 / n2; //foçando a variavel divisão sair em forma decimal

    //resultado
    printf("O resultado é:\n");
    printf("soma: %d \n", soma);
    printf("subtracao: %d \n", subtracao);
    printf("multipicacao: %d \n", multiplicacao);
    printf("divisao: %.2f \n", divisao);
}