#include <stdio.h>
#include <locale.h>

int main()
{
    printf("Descobrindo se o Triângulo é equilátero, isoceles ou escaleno\n");
    printf("Digite o primeiro lado: ");
    float lado1;
    scanf("%f", &lado1);
    
    printf("Digite o segundo lado: ");
    float lado2;
    scanf("%f", &lado2);

    printf("Digite o terceiro lado: ");
    float lado3;
    scanf("%f", &lado3);

    if (lado1 == lado2 && lado2 == lado3)
    {
        printf("Triângulo equilátero\n");
    }
    else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3)
    {
        printf("Triângulo isósceles\n");
    }
    else
    {
        printf("Triângulo escaleno\n");
    }
    return 0;
}