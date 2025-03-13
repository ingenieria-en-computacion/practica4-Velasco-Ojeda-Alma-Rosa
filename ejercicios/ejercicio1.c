#include <stdio.h>
#include <stdlib.h>

int main() {
    int n; 
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d",&n); 
    
    int *arre=NULL; 
    arre=(int*)malloc(n*sizeof(int)); 

    if (arre == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

    printf("Ingrese %d valores:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d",(arre+i));  
    }

    printf("El arreglo es: ");
    for (int i = 0; i < n; i++) {
        printf("\t %d", *(arre+i)); 
        
    }
    printf("\n");
    
    free (arre); 
    arre=NULL; 
    
    return 0;
}