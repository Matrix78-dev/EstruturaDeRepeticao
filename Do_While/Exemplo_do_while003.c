#include <stdio.h>

int main () {

    int opiton;

    do {
        printf ("Menu:\n");
        printf ("1. Opção 1\n");
        printf ("2. Opção 2\n");
        printf ("3. Sair\n");
        printf ("Escolha uma opção: ");
        scanf ("%d", &opiton);

        switch (opiton)
        {
        case 1:
            printf ("Você escolheu a opção 1.\n");
            break;
        case 2:
            printf ("Você escolheu a opção 2.\n");
            break;
        case 3:
            printf ("Saindo...\n");
            break;
        default:
            printf ("Opção inválida.\n");
            break;
        }

    } while (opiton != 3);

    return 0;
}