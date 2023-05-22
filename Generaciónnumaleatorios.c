#include <stdio.h>
#include <stdlib.h>

void generarMatrizTraspuesta(int f, int c) {
    int matriz[c][f];

    for (int i = 0; i < c; i++) {
        for (int j = 0; j < f; j++) {
            matriz[i][j] = rand() % 101; // Genera números aleatorios entre 0 y 100
        }
    }

    printf("Matriz Original:\n");
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", matriz[j][i]); // Imprime la matriz en su forma original
        }
        printf("\n");
    }
}

int main() {
    int f, c;

    printf("Ingrese el número de filas: ");
    scanf("%d", &f);

    printf("Ingrese el número de columnas: ");
    scanf("%d", &c);

    srand((unsigned int)1234); // Semilla constante para generar los mismos números aleatorios

    generarMatrizTraspuesta(f, c); // Llama a la función para generar y mostrar la matriz traspuesta

    return 0;
}


