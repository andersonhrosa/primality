#include <stdio.h>

int main(int argc, char *argv[])
{

    int val;

    printf("Digite um número:");
    scanf("%d", &val);

    ePrimo(val);
}

int ePrimo(int valor)
{
    int limite, cur;
    int teste = 0;

    limite = (valor / 2) + 1;
    cur = 2;
    while (teste != 1 && cur < limite)
    {
        if (valor % cur == 0)
        {
            teste = 1;
        }
        cur = cur + 1;
    }

    if (teste == 1)
    {
        printf("%d não é um número primo!", valor);
    }
    else
    {
        printf("%d é um número primo!", valor);
    }
}
