#include <stdio.h>
#include <stdlib.h>

void generarMatrizTraspuesta(int f, int c) {
    int matriz[c][f];

    printf("Matriz Original:\n");
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            matriz[j][i] = rand() % 101; //números aleatorios entre 0 y 100
            printf("%d ", matriz[j][i]); 
        }
        printf("\n");
    }

    printf("\nMatriz Traspuesta:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < f; j++) {
            printf("%d ", matriz[i][j]);
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

    srand((unsigned int)1234); // numeros rand

    generarMatrizTraspuesta(f, c); // Muestra la matriz original y transpuesta

    return 0;
}
