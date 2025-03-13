#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nombre[40];
    int edad;
} Estudiante;

int main() {

    int size = 2;
    Estudiante *arr = (Estudiante *)malloc(size * sizeof(Estudiante)); // Crea un arreglo dinámico usando malloc de tamaño size
    
    if ( arr== NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

    int count = 0;
    char nombre[50];
    int edad;
    printf("Ingrese estudiantes (nombre y edad, ingrese 'fin' para terminar):\n");
    while (1) {
        printf("Nombre: ");
        scanf("%s", nombre);
        if (strcmp(nombre, "fin") == 0) break;

        printf("Edad: ");
        scanf("%d", &edad);

        if (count >= size) {
            size *= 2;
            arr = (Estudiante *)realloc(arr, size * sizeof(Estudiante)); //Cambia el tamaño del arreglo
            if ( arr== NULL) {
                printf("Error: No se pudo reasignar memoria.\n");
                return 1;
            }
        }
        strcpy(arr[count].nombre, nombre);
        arr[count].edad = edad;
        count++;
    }

    printf("Lista de estudiantes:\n");
    for (int i = 0; i < count; i++) {
            printf("Nombre: %s, Edad: %d\n", arr[i].nombre, arr[i].edad);
    }

    free(arr);
    arr=NULL;
    return 0;

}