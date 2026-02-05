#include <stdio.h>

int main () {

    int numero;

    do {

        printf ("Digite um número: ");
        scanf ("%d", &numero);

        if (numero % 2 == 0) {
            printf ("%d Número par!\n", numero);
        } else {
            printf ("%d é um número impar!\n", numero);
        }

    } while (numero % 2 != 0);

    printf ("Você digitou um número par. Saindo do programa.\n");

    return 0;
}