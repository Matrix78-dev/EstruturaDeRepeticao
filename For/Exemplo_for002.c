#include <stdio.h>

int main () {

    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            printf ("%d Par!\n", i);
        } else {
            printf ("%d impar!\n", i);
        }
    } 


}