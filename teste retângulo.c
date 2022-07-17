#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    double base, altura, area, perimetro, diagonal;

    printf("Base do retangulo: ");
    scanf("%lf",&base);
    printf("Altura do retangulo: ");
    scanf("%lf",&altura);

    area = base * altura;
    perimetro = (base*2) + (altura*2);
    diagonal = sqrt(pow(base,2) + pow(altura,2));

    printf("\n¡REA = %.4lf", area);
    printf("\nPERÕMETRO = %.4lf", perimetro);
    printf("\nDIAGONAL = %.4lf\n", diagonal);

    return 0;
}
