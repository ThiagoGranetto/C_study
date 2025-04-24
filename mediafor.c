#include <stdio.h>

int main()
{
    char nome[100];
    printf("Digite o nome do aluno: ");
    scanf("%s", &nome);

    int tamanho;
    printf("Digite o numero de notas: ");
    scanf("%d", &tamanho);

    int notas[tamanho];
    int media = 0;

    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite a nota %d: \n", i + 1);
        scanf("%d", &notas[i]);
        media = media + notas[i];
    }
    media = media / tamanho;
    printf("A média do aluno %s é: %d\n", nome, media);

    return 0;
}
