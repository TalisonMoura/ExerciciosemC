#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i, pdt;

    printf("Deseja a tabuada para qual valor?");
    scanf("%d", &n);

    for(i=1; i<=10;i++)  {
        pdt = n*i;
        printf("%d x %d = %d\n",n,i,pdt);
    }

    return 0;
}
