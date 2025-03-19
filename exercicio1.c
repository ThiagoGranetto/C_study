#include <stdio.h>
#include <locale.h>

int main()
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
    return 0;
    
}