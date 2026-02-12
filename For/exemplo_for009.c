#include <stdio.h>

int main () {

    for (int i = 10, j = 100; i <= 50 && j >= 60; i += 10, j -= 10){
        printf ("i = %d : j = %d\n", i, j);
    }

    return 0;
}