#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a,b,c,menor;

    printf("Primeiro Valor: ");
    scanf("%d", &a);

    printf("Segundo Valor: ");
    scanf("%d", &b);

    printf("Terceiro Valor: ");
    scanf("%d", &c);

    if(a<b && a<c)  {
        menor = a;
    }
    else if (b<c)   {
        menor = b;
    }
    else    {
        menor = c;
    }
    printf("Menor = %d\n", menor);
    return 0;
}
