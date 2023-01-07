#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,soma=0,aux;

    printf("Digite dois numeros:\n");
    scanf("%d %d", &x, &y);

    if(x > y)   {
        aux = x;
        x = y;
        y = aux;
    }
    for(int i = x+1; i < y; i++)    {
        if(i % 2 != 0)  {
            soma = soma + i;
        }
    }
    printf("Soma dos Impares = %d\n", soma);

    return 0;
}
