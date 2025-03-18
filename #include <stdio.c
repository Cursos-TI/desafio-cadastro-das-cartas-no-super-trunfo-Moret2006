#include <stdio.h>

int main (){

    float temperatura, umidade;
    unsigned int estoque, estoquemin = 1000;
    
    printf("entre com a temperatur\n");
    scanf("%f", &temperatura);

    printf("informe a umidade\n");
    scanf("%f", &umidade);

    printf("informe a quantidade do seu estoque\n");
    scanf("%d", &estoque);
    
    if (temperatura > 30)
    printf("muito quente\n");
    else
    printf("temperatura normal\n");

    if (umidade > 50)
    printf("umidade elevada\n");
    else
    printf("umidade normal\n");

    if (estoque >= estoquemin)
    printf("estoque ok\n");
    else
    printf("estoque baixo\n");
}
