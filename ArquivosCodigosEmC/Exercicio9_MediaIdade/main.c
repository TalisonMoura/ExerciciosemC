#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade,soma=0,cnt=0;
    double media;

    printf("Digite as idades:\n");
    scanf("%d", &idade);

    while(idade >= 0)   {
        soma = soma + idade;
        cnt++;
        scanf("%d", &idade);
    }
    if(cnt == 0)  {
        printf("IMPOSSIVEL CALCULAR\n");
    }
    else{
        media = (double)soma / cnt;
        printf("MEDIA = %.2lf\n", media);
    }
    return 0;
}
