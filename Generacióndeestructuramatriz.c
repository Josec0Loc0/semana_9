#include <stdio.h>
#include <stdlib.h>

void generarMatrizTraspuesta(int f, int c) {
    int matriz[c][f];

    for (int i = 0; i < c; i++) {
        for (int j = 0; j < f; j++) {
            matriz[i][j] = rand() % 101;
        }
    }

    printf("Matriz Original:\n");
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }
}


