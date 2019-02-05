#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "libMat.h"
#define ren 100
#define col 100


int main()
{ int m1[ren][col], m2[ren][col], m3[ren][col], m4[ren][col], m5[ren][col], m6[ren][col], m7[ren][col];
  DimensionesMatriz dimensiones[2];

	captura(&dimensiones[0] , '1');
	captura(&dimensiones[1] , '2');

	printf("%d %d %d %d\n", dimensiones[0].renglones,dimensiones[0].columnas,dimensiones[1].renglones,dimensiones[1].columnas ); // prueba para ver si captura tiene problemas NEGATIVO

	inicializaMatrizInt(m1,m2,&dimensiones[0], &dimensiones[1]);



	imprimeMatrizInt(m1,&dimensiones[0],&dimensiones[1],1); //imprime la matriz 1

	transpuestaMatrizInt(m1, &dimensiones[0], m3);
	transpuestaMatrizInt(m2, &dimensiones[1], m4);

	printf("Transpuesta Matriz 1:\n");
	imprimeMatrizInt(m3,&dimensiones[0],&dimensiones[0],3);
	printf("Transpuesta Matriz 2:\n");
	imprimeMatrizInt(m4,&dimensiones[1],&dimensiones[0],3);
	
	if(validacuadratura(&dimensiones[0],&dimensiones[1])) 
	{ 
		sumaMatrizInt(m1,m2,&dimensiones[0],m5);
		restaMatrizInt(m1,m2,&dimensiones[0],m6);
		
		printf("Matriz 1 + Matriz 2 = Matriz 3:\n");
		imprimeMatrizInt(m5,&dimensiones[1],&dimensiones[0],1);
		printf("Matriz 1 - Matriz 2 = Matriz 4:\n");
		imprimeMatrizInt(m6,&dimensiones[1],&dimensiones[0],1);
	}
	else printf("No se pueden sumar las matrices\n");

	if(validamultiplicabilidad(&dimensiones[0],&dimensiones[1])) 
	{	multiplicaMatrizInt(m1,m2,&dimensiones[0],&dimensiones[1],m7);
	
		printf("Matriz 1 * Matriz 2 = Matriz 5:\n");
		imprimeMatrizInt(m7,&dimensiones[0],&dimensiones[1],2);
	}
	else printf("No se pueden multiplicar las matrices\n");

	return 0;
}