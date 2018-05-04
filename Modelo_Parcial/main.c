#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define TAM 20
#define LONG 25


int main()
{


    eProducto listaProducto[TAM]= {{0}};

    cargarDatosHardCode(listaProducto);

    menuProducto(listaProducto, TAM);


    return 0;
}
