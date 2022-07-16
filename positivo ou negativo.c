#include <stdio.h>
#include <stdlib.h>

//Programa para saber se o número é positivo ou negativo

int main()
{

    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if(num > 0)
    {
        printf("O numero %d, e Positivo!", num);
    }
    else
    {
        printf("O numero %d, e Negativo!", num);

    }


    return 0;
}
