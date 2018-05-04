#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define TAM 20
#define LONG 25

void menuProducto(eProducto lista[], int tam)
{
        int opcion;
        int index;
        int numproducto;
        eUsuario listaUsuarios[TAM]= {{0}};

        do{

                printf("1 - ALTA PRODUCTO\n");
                printf("2 - BAJAS DE PRODUCTO\n");
                printf("3 - MODIFICAR PUBLICACIONES\n");
                printf("4 - MOSTRAR LISTA DE PRODUCTOS\n");
                printf("5 - MENU DE USUARIOS\n");
                printf("\n9 - SALIR\n");

                opcion = IngresarOpcionMenu(1,9);

                switch(opcion){
                    case 1:
                        index=buscarLibre(lista,TAM);
                        if(index!=-1){
                            lista[index].idProducto = index+1;
                            fflush(stdin);

                          /*  printf("\nIngrese Id de usuario: ");
                            scanf("%d",&lista[index].idUsuario);
                            fflush(stdin);*/
                            printf("\nIngrese Nombre del producto: ");
                            gets(lista[index].nombre);
                            fflush(stdin);
                            printf("\nIngrese precio del producto: ");
                            scanf("%d",&lista[index].precio);
                            fflush(stdin);
                            printf("\nIngrese cantidad de productos (STOCK): ");
                            scanf("%d",&lista[index].stock);
                            lista[index].estado = 1;

                        }else{
                            printf("No hay mas espacio para guardar productos!!!");
                            getche();
                        }
                        break;
                    case 2:
                        printf("ID Producto: ");
                        scanf("%d",&numproducto);
                        fflush(stdin);
                        index=buscarProducto(lista,TAM,numproducto);
                        if(index!=-1){
                            lista[index].idProducto=0;
                        }else{
                            printf("***PRODUCTO NO ENCONTRADO***");

                        }
                        break;
                    case 3:
                        printf("ID Producto: ");
                        scanf("%d",&numproducto);
                        fflush(stdin);
                        index=buscarProducto(lista,TAM,numproducto);
                        if(index!=-1){
                            printf("\nProducto N: %d",lista[index].idProducto);
                            printf("\nModificar nombre: ");
                            gets(lista[index].nombre);
                            fflush(stdin);
                            printf("\nModificar precio: ");
                            scanf("%d",&lista[index].precio);
                            fflush(stdin);
                            printf("\nModificar stock: ");
                            scanf("%d",&lista[index].stock);
                            fflush(stdin);
                            printf("\nModificar Estado: ");
                            scanf("%d",&lista[index].estado);


                        }else{
                            printf("Producto no encontrado!!!");
                            getche();
                        }
                        break;

                        case 4:
                            for(int i=0;i<TAM;i++){
                                if(lista[i].estado==1){
                                    printf("\n---------------------");
                                    printf("\nID Producto N: %d",lista[i].idProducto);
                                    printf("\nID Usuario N: %d",lista[i].idUsuario);
                                    printf("\nNombre del producto: ");
                                    puts(lista[i].nombre);
                                    printf("Precio: %d",lista[i].precio);
                                    printf("\nStock: %d",lista[i].stock);
                                    printf("\nEstado: %d",lista[i].estado);
                                }
                            }
                           break;

                    case 5:
                    printf("\nMenu Usuario\n");
                    menuUsuario(listaUsuarios, lista, TAM);
                }

            printf("\n\n");
            system("pause");
            system("cls");

            }while(opcion!=9);
}


void menuUsuario(eUsuario lista[], eProducto listaproducto[], int tam)
{
        int opcion;
        int index;
        int numusuario;

        do{

                printf("1 - ALTA DE USUARIO\n");
                printf("2 - BAJAS DE USUARIO\n");
                printf("3 - MODIFICACIONES\n");
                printf("4 - MOSTRAR\n");
                printf("5 - MENU PRODUCTOS\n");

                printf("\n9 - SALIR\n");

                opcion = IngresarOpcionMenu(1,9);

                switch(opcion){
                    case 1:
                        index=buscarUsuarioLibre(lista,TAM);
                        if(index!=-1){
                            lista[index].idUsuario = index+1;
                            fflush(stdin);
                            printf("\nIngrese Nombre: ");
                            gets(lista[index].nombreU);
                            printf("\nIngrese Email: ");
                            gets(lista[index].email);
                            fflush(stdin);
                            printf("\nIngrese password: ");
                            gets(lista[index].Password);
                            lista[index].estado = 1;


                            printf("\nQue producto desea comprar? Ingresar ID: \n");


                            for(int i=0;i<TAM;i++){
                                if(listaproducto[i].estado==1){
                                    printf("\n---------------------");
                                    printf("\nID N: %d",listaproducto[i].idProducto);
                                    printf(" Nombre del producto: ");
                                    puts(listaproducto[i].nombre);
                                    printf(" Precio: %d",listaproducto[i].precio);
                                    printf("  Stock: %d\n",listaproducto[i].stock);
                                }
                            }

                            scanf("%d",&lista[index].idProducto);


                        }else{
                            printf("No hay mas espacio para guardar usuarios!!!");
                            getche();
                        }
                        break;
                    case 2:
                        printf("ID Usuario: ");
                        scanf("%d",&numusuario);
                        fflush(stdin);
                        index=buscarUsuario(lista,TAM,numusuario);
                        if(index!=-1){
                            lista[index].idUsuario=0;
                        }else{
                            printf("Usuario no encontrado!!!");

                        }
                        break;
                    case 3:
                        printf("ID Usuario: ");
                        scanf("%d",&numusuario);
                        fflush(stdin);
                        index=buscarUsuario(lista,TAM,numusuario);
                        if(index!=-1){
                            printf("\nSerie N: %d",lista[index].idUsuario);
                            printf("\nModificar Nombre: ");
                            gets(lista[index].nombreU);
                            fflush(stdin);
                            printf("\nModificar email: ");
                            gets(lista[index].email);
                            fflush(stdin);
                            printf("\nModificar password de usuario: ");
                            gets(lista[index].Password);
                            fflush(stdin);
                            printf("\nModificar Producto(id): ");
                            scanf("%d",&lista[index].idProducto);
                            fflush(stdin);
                            printf("\nModificar Estado: ");
                            scanf("%d",&lista[index].estado);


                        }else{
                            printf("Usuario no encontrado!!!");
                            getche();
                        }
                        break;

                        case 4:
                            for(int i=0;i<TAM;i++){
                                if(lista[i].estado==1){
                                    printf("\n---------------------");
                                    printf("\nID N: %d",lista[i].idUsuario);
                                    printf("\nNombre: ");
                                    puts(lista[i].nombreU);
                                    printf("\nEmail: ");
                                    puts(lista[i].email);
                                    printf("pass: %d",lista[i].Password);
                                    printf("\nProducto Id N: %d",lista[i].idProducto);
                                    printf("\nEstado: %d",lista[i].estado);
                                }

                            }

                            break;

                         case 5:

//                      menuProducto(eProducto [], int[], int tam);
                    system("cls");
                    menuProducto(listaproducto, tam);


                        break;

   }
            printf("\n\n");
            system("pause");
            system("cls");

            }while(opcion!=9);
}



int buscarLibre(eProducto vec[],int tam)
{
    int index = -1;
    for(int i=0;i<tam;i++){
        if(vec[i].idProducto==0){
            index=i;
            break;
        }
    }

     return index;
}

int buscarProducto(eProducto vec[],int tam,int id){

    int retorno= -1;
    for(int i=0;i<tam;i++){
        if(vec[i].idProducto==id){
            retorno = i;
        }
    }
    return retorno;
}

void cargarDatosHardCode(eProducto lista[])
{

    int id[10]={1,2,3,4,5,6,7,8,9,10};
    char nombreH[10][LONG]={"Remera verde","Taza StarWars","FIFA 2019", "Bicicleta", "Traje de Ministro", "Linterna", "Espejo 308", "Ruleman", "Bujia", "Trompeta"};
    int stockH[10]={12,20,3,8,1,25,30,100,43,34};
    int precioH[10]={70,88,150,800,1200,50,226,15,34,86};
    int estado[10]={1,1,1,1,1,1,1,1,1,1};

    for(int i=0; i<TAM; i++)
    {
        lista[i].idProducto=id[i];
        strcpy(lista[i].nombre, nombreH[i]);
        lista[i].stock=stockH[i];
        lista[i].precio=precioH[i];
        lista[i].estado=estado[i];

    }
}


void cargarDatosHardCode(eUsuario lista[])
{/*int idUsuario;
char nombreU[50];
char email[25];
char Password[25];
int idProducto;
int estado;*/

    int id[10]={1,2,3,4,5,6,7,8,9,10};
    char nombreUs[10][LONG]={"Jorge","Thomas","Enrique", "Vanesa", "Roberto", "Claudio", "Esteban", "Ricardo", "Bruno", "Tincho"};
    char emailU[10]={"Jorge@gmail.com","Thomas@gmail.com","Enrique@gmail.com",8,1,25,30,100,43,34};
    int passU[10]={70,88,150,800,1200,50,226,15,34,86};
    int idProd[10]={1,2,3,4,5,6,7,8,9,10};
    int estado[10]={1,1,1,1,1,1,1,1,1,1};

    for(int i=0; i<TAM; i++)
    {
        lista[i].idProducto=id[i];
        strcpy(lista[i].nombre, nombreH[i]);
        lista[i].stock=stockH[i];
        lista[i].precio=precioH[i];
        lista[i].estado=estado[i];

    }
}



int IngresarOpcionMenu(int min, int max)
{
    int entero;

    fflush(stdin);
    scanf("%d",&entero);
    entero = validarOpcionMenu(entero, min, max);

    return entero;
}

int validarOpcionMenu (int dato, int min, int max)
{
    while(dato < min || dato > max)
    {
        fflush(stdin);
        printf("Dato no v%clido reingresar:\n", 160);
        scanf("%d", &dato);
    }

    return dato;

}

int buscarUsuarioLibre(eUsuario vec[],int tam)
{
    int index = -1;

    for(int i=0;i<tam;i++){
        if(vec[i].idUsuario==0){
            index=i;
            break;
        }
    }

     return index;
}


int buscarUsuario(eUsuario vec[],int tam,int id){

    int retorno= -1;
    for(int i=0;i<tam;i++){
        if(vec[i].idUsuario==id){
            retorno = i;
        }
    }
    return retorno;
}


