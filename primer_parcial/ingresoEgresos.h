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

/** \brief inicializa los estados a cero
 *
 * \param array de estructura
 * \param  tama�o del array
 * \return
 *
 */
void indiceIngresoyEgreso(eIngresoyEgreso  [], int );

/** \brief carga inicial de llamados para poder operar
 *
 * \param array de estructura
 * \param  tamanio del array
 * \return
 *
 */
void cargarIngresos(eIngresoyEgreso ingresos [], int tamanio);

/** \brief recibir ingreso
 *
 * \param ARRAY ESTRUCTURA de ingresos
 * \param ARRAY ESTRUCTURA de propietarios
 * \param CANT DE ingresos
 * \param CANT DE propietarios
 * \return
 *
 */
 void recibiringreso(eIngresoyEgreso ingreso [], ePropietario propiestarios[],int CantLugares, int CantPropietarios);

 /** \brief LISTADO DE ingresos
 *
 * \param array de estrcutura DE ingreso
 * \param  tama�o del array
 * \return
 *
 */
 void listaringreso (eIngresoyEgreso ingreso [], int tamanio);

 /** \brief MOSTRAR 1 ingreso
 *
 * \param array de estructura DE ingreso
 * \param  tama�o del array
 * \return
 *
 */
 void mostraringreso (eIngresoyEgreso ingreso);
  /** \brief FINALIZAR ingreso
 *
 * \param ARRAY ESTRUCTURA de ingresos
 * \param ARRAY ESTRUCTURA de propietarios
 * \param CANT DE ingresos
 * \param CANT DE propietarios
 * \return
 *
 */
 void finzalarIngreso(eIngresoyEgreso ingreso [], ePropietario propiestarios[],int CantLugares, int CantPropietarios);

 /** \brief recorre propietarios, busca LA ingreso , LA DA POR FINALIZADA
 *
 * \param ARRAY ESTRUCTURA de ingresos
 * \param ARRAY ESTRUCTURA de propietarios
 * \param CANT DE ingresos
 * \param CANT DE propiestarios
 * \param CANT DE ambulancias
 * \return
 *
 */
int egresarAuto(eIngresoyEgreso ingresoss[], ePropietario cliente[],int CantLugares, int CantPropietarios);

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */

int devolverHorasEstadia();

#endif
