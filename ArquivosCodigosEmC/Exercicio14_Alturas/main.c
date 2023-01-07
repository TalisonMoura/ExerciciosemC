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
    int i,n,cnt;
    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);
    int idade[n];
    char nome[n][50];
    double altura[n];
    double soma=0,media=0,perc=0;

    for(i=0;i<n;i++)    {
        printf("Dados da %da pessoa: \n",i+1);
        printf("Nome: ");
        limpar_entrada();          //fseek(stdin,0,SEEK_END); outra forma de limpar a quebra de linha.
        ler_texto(nome[i], 50);   //gets(nome[i]); outra forma para armazenar vetor de string(char).

        printf("Idade: ");
        scanf("%d", &idade[i]);

        printf("Altura: ");
        scanf("%lf", &altura[i]);
    }
    for(i=0;i<n;i++)    {
        soma  = soma + altura[i];
    }
        media = soma / n;
    printf("\nAltura media: %.2lf\n", media);
    for(i=0;i<n;i++)    {
        if(idade[i]<16) {
            cnt++;
        }
    }
    perc = (double)(cnt * 100) / n;
    printf("Pessoas com menos de 16 anos: %.1lf %%\n", perc);
    for(i=0;i<n;i++)    {
        if(idade[i] < 16)   {
            printf("%s\n", nome[i]);
        }
    }

    return 0;
}
