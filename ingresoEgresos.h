#ifndef INGRESOEGRESOS_H
#define INGRESOEGRESOS_H

#include "funciones.h"
#include "propietarios.h"

typedef struct
{
    int idIngresoEgreso;
    int idPropietario;
    char patente [10];
    int marca ;
    int status;
    int numeroTarjetaCredito;
    int hora;

} eIngresoyEgreso;

void indiceIngresoyEgreso(eIngresoyEgreso  [], int );
void cargarIngresos(eIngresoyEgreso ingresos [], int tamanio);
void recibiringreso(eIngresoyEgreso ingreso [], ePropietario propiestarios[],int CantLugares, int CantPropietarios);
void listaringreso (eIngresoyEgreso ingreso [], int tamanio);
void mostraringreso (eIngresoyEgreso ingreso);
void finzalarIngreso(eIngresoyEgreso ingreso [], ePropietario propiestarios[],int CantLugares, int CantPropietarios);
int egresarAuto(eIngresoyEgreso ingresoss[], ePropietario cliente[],int CantLugares, int CantPropietarios);
int devolverHorasEstadia();

#endif
