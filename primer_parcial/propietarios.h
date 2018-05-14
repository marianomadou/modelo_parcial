#ifndef PROPIETARIOS_H
#define PROPIETARIOS_H

typedef struct
{
    int idPropietario;
    char nombreyApellido [40];
    char direccion [40];
    int status;
    char tarjetaCredito [20];

} ePropietario;

int  altaCliente (ePropietario [], int );
int searchIndexUsers ( ePropietario [], int );
void indicePropietario(ePropietario[], int );
void cargarSocios(ePropietario [], int );
void listadoDePropietario (ePropietario [], int );
void listadoDePropietario2 (ePropietario [], int );
void showOneClient (ePropietario);
void showOneClient2 (ePropietario);
void mostrarCliente (ePropietario [], int , int );
void mostrarCliente2 (ePropietario [], int , int );
void bajaCliente(ePropietario [], int, int );
void modificarPropietario (ePropietario [], int, int );
#endif
