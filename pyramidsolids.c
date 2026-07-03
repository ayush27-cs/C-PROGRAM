#include <stdio.h>
void main() {
    int i, j,sp;
    for (i = 1; i <= 4; i++) {
        for (sp=1;sp<=4-i; sp++) {
            printf(" ");
        }
        for (j = 1; j <= i*2 - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

