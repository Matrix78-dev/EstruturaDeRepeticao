#include <stdio.h>

int main () {

    int num;

    do {
        printf ("Digite um número negativo: ");
        scanf ("%d", &num);
    } while (num >= 0);

    printf ("Você saiu!\n");

    return 0;
}