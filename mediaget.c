#include <stdio.h>
#include <stdlib.h>

float lerNota(int numeroNota)
{
    char entrada[50];
    float nota;
    printf("Digite a nota %d (0-10): ", numeroNota);
    if (fgets(entrada, sizeof(entrada), stdin) != NULL)
    {
        nota = strtof(entrada, NULL);
    }
    else
    {
        return lerNota(numeroNota);
    }
    if (nota < 0 || nota > 10)
    {
        printf("Erro: A nota deve estar entre 0 e 10. Digite novamente.\n");
        return lerNota(numeroNota);
    }
    return nota;
}

int main()
{
    float nota1, nota2, nota3, media;

    nota1 = lerNota(1);
    nota2 = lerNota(2);
    nota3 = lerNota(3);

    media = (nota1 + nota2 + nota3) / 3;
    printf("A média da turma é: %.2f\n", media);

    if (media > 5)
    {
        printf("Você está aprovado.\n");
    }
    else
    {
        printf("Você está reprovado.\n");
    }

    return 0;
}