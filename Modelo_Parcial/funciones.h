#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#define TAM 20
#define LONG 25

typedef struct
{
int idUsuario;
int idProducto;
char nombre[LONG];
int precio;
int stock;
int estado;
} eProducto;


typedef struct
{
int idUsuario;
char nombreU[50];
char email[25];
char Password[25];
int idProducto;
int estado;
} eUsuario;

typedef struct
{
int idVenta;
int idProducto;
int calificacion;
int cantidad;
} eVentas;

//void menuUsuario(eUsuario [], eProducto [], int tam);
int buscarUsuario(eUsuario [],int,int);
int buscarUsuarioLibre(eUsuario [],int);

int IngresarOpcionMenu(int, int);
int validarOpcionMenu(int, int, int);
void menuProducto(eProducto [], int);
int buscarLibre(eProducto [],int);
int buscarProducto(eProducto [],int, int);
void cargarDatosHardCode(eProducto []);


#endif // FUNCIONES_H_INCLUDED
