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

void parimpar()
{
    printf("Digite um número:");
    int num;
    scanf("%i", &num);
    if (num % 2 == 0)
    {
        printf("O número é par\n");
    }
    else
    {
        printf("O número é ímpar\n");
    }
    if (num % 5 == 0)
    {
        printf("O número é múltiplo de 5\n");
    }
    else
    {
        printf("O número não é múltiplo de 5\n");
    }
}

void anobisexto()
{
    printf("Digite um ano:");
    int ano;
    scanf("%i", &ano);
    if (ano % 4 == 0 && ano % 100 != 0)
    {
        printf("O ano é bisexto\n");
    }
    else if (ano % 4 == 0 && ano % 100 == 0 && ano % 400 == 0)
    {
        printf("O ano é bisexto\n");
    }
    else
    {
        printf("O ano não é bisexto\n");
    }
}

void tabuada()
{
    printf("Tabuada do número:\n");
    int num;
    scanf("%i", &num);

    printf("Quantidade de vezes que deseja ver a tabuada:\n");
    int vezes;
    scanf("%i", &vezes);
    printf("Tabuada do %i\n", num); 
    // Exibe a tabuada do número
    for (int i = 1; i <= vezes; i++)
    {
        printf("%i x %i = %i\n", num, i, num * i);
    }
    printf("Deseja ver a tabuada de outro número? (1-Sim / 0-Não)\n");
    int opcao;
    scanf("%i", &opcao);
    if (opcao == 1)
    {
        tabuada();
    }
    else
    {
        printf("Saindo da tabuada\n");
    }

}

int main()
{
    int opcao;
        printf("Digite a função a ser selecionada\n");
        printf("1-Função Triangulo\n");
        printf("2-Função Media\n");
        printf("3-Par ou Impar\n");
        printf("4-Ano Bisexto\n");
        printf("5-Tabuada\n");
        printf("0-Sair\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
            case 1:
                triangulo();
                break;
            case 2:
                media();
                break;
            case 3:
                parimpar();
                break;
            case 4:
                anobisexto();
                break;
            case 5:
                tabuada();
                break;
            case 0:
                printf("Saindo do programa\n");
                printf("Obrigado por usar o programa\n");
                printf("Volte sempre\n");
                break;
            default:
                printf("Opção inválida\n");
                break;
            }      
            return 0;
}