#include <stdio.h>

int main() {
    int n;

    printf("Ingrese el tamaño de la matriz cuadrada (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Tamaño invalido.\n");
        return 1;
    }

    int matriz[n][n];

    printf("Ingrese las entradas de la matriz (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Entrada [%d][%d]: ", i, j);
            if (scanf("%d", &matriz[i][j]) != 1) {
                printf("Entrada invalida.");
                return 1;
            }
        }
    }

    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += matriz[i][i];
    }

    printf("La suma de la diagonal principal es: %d\n", suma);

    return 0;
}
