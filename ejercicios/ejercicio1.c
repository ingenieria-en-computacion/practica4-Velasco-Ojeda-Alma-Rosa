#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,e;
    printf("Ingrese el tamaño del arreglo: \n");
    scanf("%d",&n); //leemos el tamaño del arreglo
    
    int*arr=(int*)malloc(n* sizeof(int));

    if (arr == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

    printf("Ingrese %d valores:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d",&e);
        //printf("%d",arr[i]);
    }

    printf("El arreglo es: ");
    for (int i = 0; i < e; i++) { 
        printf("%d \t",arr[e]);
    }
    printf("\n");

    free(arr);
    return 0;
}
