#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void triangulo()
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
}

void media()
{
    printf("Calculo de média da turma\n");
    printf("Digite a primeira nota: ");
    float nota1;
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");  
    float nota2;
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    float nota3;
    scanf("%f", &nota3);
    
    float media = (nota1 + nota2 + nota3) / 3;
    printf("A média da turma é: %.2f\n", media);
    return 0;

    if (media >= 7)
    {
        printf("Aprovado\n");
    }
    else if (media >= 5)
    {
        printf("Recuperação\n");
    }
    else
    {
        printf("Reprovado\n");
    }
}

int main()
{   
    int opcao;
    printf("Digite a função a ser selecionada\n");
    printf("1-Função Triangulo\n");
    printf("2-Função Media\n");
    printf("0-Sair\n");
    printf("420-capae\n");
    scanf("%d", &opcao);
    if(opcao == 1){
        triangulo();
    }
    else if(opcao == 2){
        media();
    }
    else if(opcao == 0){
        exit;
    }
    else if(opcao == 420){
        printf("parabens vc é loco da cabeça");
    }
    
    return 0;
}