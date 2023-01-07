#include <stdio.h>
int main()  {

    int n, i;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    double vet[n];

    for(i=0;i<n;i++)    {
        printf("Entre com um numero: ");
        scanf("%lf", &vet[i]);
    }
    printf("\nNumeros digitados:\n");
    for(i=0;i<n;i++)    {
        printf("%1.lf\n", vet[i]);
    }
    return 0;
}
