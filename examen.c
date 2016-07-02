#include <stdio.h>
#include <stdlib.h>


struct libro {
    char     titulo[50];
    char     autor[50];
    char     categoria[50];
    int      id[50];
 };

struct Libro libros;

void CargarLibros(int cant);
void PrintLibro(int i);
void GuardarLibros();

int 	i;
int 	cant=0;
int 	resp,resp1;
char 	resp2;
FILE *archivo;

int main(){

 	archivo=fopen("C:\\Users\\Leo\\Documents\\RegistroLibros.txt","a+r+");




 	do{
 		printf("\n------MENU----\n");
        printf("1- Ingresar nuevo Libro.\n");
        printf("2- Mostrar lista de libros.\n");
        printf("Ingresar las tecla x para salir\n");
 		scanf("%d",&resp);
 	}while(!resp,getchar()!='\n');

 	switch(resp){

 		case 1:

 		do{
 			system("clear");
 			printf("\n¿Cuantos libros desea agregar?\nIngresar cantidad: ");
 			scanf("%d",&cant);
 		}while(!cant,getchar()!='\n');

 		CargarLibros (cant);

 		for(i=0;i<cant;i++){
 			GuardarLibros();
 			}

 		break;

 		case 2:
 		system("clear");

 		printf("Se cargaron los siguientes libros: \n");
 			for(i=0;i<cant;i++){
 				PrintLibro(i);
 		break;

        case 'x':
        exit(0);
        break;
 		default:

 		break;
 			}
}
