#include <stdio.h>

int main()
{
    int i,n;
    double media=0,soma=0;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    double vet[n];

    for(i=0;i<n;i++)    {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    printf("\nValores = ");
    for(i=0;i<n;i++)    {
        printf("%.1lf || ", vet[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)    {
        soma  = soma + vet[i];
    }
    media = soma / n;
    printf("Soma = %.2lf\n", soma);
    printf("Media = %.2lf\n", media);

    return 0;
}
