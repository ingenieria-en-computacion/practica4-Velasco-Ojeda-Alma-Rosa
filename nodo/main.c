#include"nodo.h"
#include <stdio.h>
#include<stdlib.h>


int main(){
    nodo *primero=NULL;
    nodo *temp;
    nodo*otro;

    primero=crear_nodo(1);
    otro=crear_nodo(1);
    otro->sig=crear_nodo(3);
    primero->sig=crear_nodo(2);
    primero->sig->sig=crear_nodo(3);
     printf("%p\n",primero);
     print_nodo(primero);


    printf("%p\n",primero->sig);
    print_nodo(primero->sig);

   // primero->sig=crear_nodo(2); //manda a llamar a malloc
    printf("%p\n",primero->sig->sig);
    print_nodo(primero->sig->sig);

    borrar_nodo(primero->sig);
    borrar_nodo(primero);


    return 0;
}

