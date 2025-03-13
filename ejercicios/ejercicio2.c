#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;
    printf("Ingrese el número de filas: ");
    scanf ("%d", &m); 
    
    printf("Ingrese el número de columnas: ");
    scanf ("%d", &n); 

    int *matrix = (int *)calloc(m * n, sizeof(int));
    if (matrix == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        
    }

    printf("Matriz inicializada con ceros:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("\t%i",*(matrix + (i * n) + j));
        }
        printf("\n");
    }

    printf ("Cuantas coordenadas desea cambiar?\n");
    int row, col, value, cam; 
    scanf("%d",&cam); 

    for (int e=0; e<cam; e++ ){
        printf("Ingrese las coordenadas (fila, columna):\n");
        scanf("%d,%d", &row,&col); 
        printf("Ingrese el valor para modificar (ej. 1 2 5):\n");
        scanf("%d", &value); 
        matrix[(row-1) * n + (col-1)] = value;
    }

    printf("Matriz actualizada:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("\t%i",*(matrix + (i * n) + j));
        }
        printf("\n");
    }

    free(matrix);
    matrix=NULL; 
  return 0; 
}