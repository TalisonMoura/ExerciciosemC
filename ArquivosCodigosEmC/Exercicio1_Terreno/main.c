#include <stdio.h>
#include <stdlib.h>

int main()  {

   double largura, comprimento, valormq, area, preco;

   printf("Digite a largura do terreno: ");
   scanf("%lf", &largura);

   printf("Digite o comprimento do terreno: ");
   scanf("%lf", &comprimento);

   printf("Digite o valor do metro quadrado: ");
   scanf("%lf", &valormq);

   area = (largura*comprimento);
   preco = (area*valormq);

   printf("Area do terreno: %.2lf\n", area);
   printf("Preco do terreno: %.2lf\n", preco);

    return 0;
}
