
#include <stdio.h>

void par_impar(int v)
{
    if (v % 2 == 0)
    {
        printf("O numero e par");
    }
    else
    {
        printf("O numero e impar");
    }
    return;
}

int main()
{
    int valor = 0;
    printf("Insira um valor: ");
    scanf("%d", &valor);
    par_impar(valor);
    printf("%d", valor);
    return 0;
}