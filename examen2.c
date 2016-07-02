#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Libro {
   char     nombre[50];
   char     autor[50]; 
   char     categoria[80];
   int      id[50];
};


int main(){
    
    int 	i;
    int 	cant=0;
    int 	resp,resp1;
    char 	resp2;
    
    
	struct Libro libros[50];

	
	do{
	do{
		printf("\nElija entre las siguientes opciones\n1- Ingresar nuevo libro. \n2- Mostrar Todos los libros.\n3- Salir.\n");
		scanf("%d",&resp);
	}while(!resp,getchar()!='\n');

	switch(resp){
		
		case 1:
		do{
			system("clear");
			printf("\n¿Cuantos Libros desea ingresar?\nPor favor ingrese cantidad: ");
			scanf("%d",&cant);
		}while(!cant,getchar()!='\n');


		printf("Por favor cargue su libro:... \n");
	
		for(i=0;i<cant;i++){
			printf("\nIngrese Nombre: ");
			fgets(libros[i].nombre, 50, stdin);
		
			printf("\nIngrese Autor: ");
			fgets(libros[i].autor, 50, stdin);
		
			printf("\nIngrese Categoria: ");
			fgets(libros[i].categoria, 100, stdin);
			
			do{
				printf("\nIngrese ID: ");
				scanf("%d",libros[i].id);
			}while(!(libros[i].id),getchar()!='\n');
			
		system("clear");
		}
		
		break;
	
		case 2:
			system("clear");
			printf("Los libros cargados son los siguientes: \n");
			for(i=0;i<cant;i++){
				printf("\nLibro nº %d: \n",i+1);
				printf("****************************\n");
				printf( "Nombre: %s", libros[i].nombre);
   				printf( "Autor: %s", libros[i].autor);
   				printf( "Categoria: %s", libros[i].categoria);
   				printf( "ID: %d\n", *libros[i].id);
   			}
		break;
	}
	}while(resp!=3);
	printf("\n Muchas gracias, Hasta Pronto");
}