#include <stdio.h>
#include <stdlib.h>
void limpar_entrada()   {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
    }

void ler_texto(char *buffer, int length)    {
        fgets(buffer, length, stdin);
        strtok(buffer, "\n");
    }

int main()  {

    char nome1[50], nome2[50];
    int idade1, idade2;
    double idadeMed;

    printf("Dados da primeira pessoa:\n");
    printf("Nome1: ");
    //limpar_entrada();
    ler_texto(nome1, 50);

    printf("Idade1: ");
    scanf("%d", &idade1);

    printf("Dados da segunda pessoa:\n");
    printf("Nome2: ");
    limpar_entrada();
    ler_texto(nome2, 50);

    printf("Idade2: ");
    scanf("%d", &idade2);

    idadeMed = (double)(idade1 + idade2) / 2;

    printf("A idade media de %s e %s eh de %.1lf anos", nome1,nome2,idadeMed);

    return 0;
}
