#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "libMat.h"
#define col 100

void captura(DimensionesMatriz *M, char numero)
{
	printf("\nRenglones Matriz %c: ", numero);
	scanf("%d", &M->renglones);
	printf("\nColumnas Matriz %c: ", numero);
	scanf("%d", &M->columnas);
}

void sumaMatrizInt(int m1[][100], int m2[][100], DimensionesMatriz *dimensionesm1, int MatrizResultante[][100])
{
	for (int i = 0; i < dimensionesm1->renglones; i++)
		for (int j = 0; j < dimensionesm1->columnas; j++)
			MatrizResultante[i][j] = m1[i][j] + m2[i][j]; 
}

void restaMatrizInt(int m1[][100], int m2[][100], DimensionesMatriz *dimensionesm1, int MatrizResultante[][100])
{
	for (int i = 0; i < dimensionesm1->renglones; i++)
		for (int j = 0; j < dimensionesm1->columnas; j++)
			MatrizResultante[i][j] = m1[i][j] - m2[i][j]; 	
}

void multiplicaMatrizInt(int m1[][100],int m2[][100], DimensionesMatriz *dimensionesm1, DimensionesMatriz *dimensionesm2, int MatrizResultante[][100])
{
		for(int i=0; i< dimensionesm1->renglones; i++)
		{
			for(int j=0; j< dimensionesm2->columnas; j++)
			{
				for(int k=0; k< dimensionesm1->columnas; k++)
				{
					MatrizResultante[i][j] += m1[i][k] * m2[k][j];
				}
			}
		}
}

int validacuadratura(DimensionesMatriz *dimensionesm1,DimensionesMatriz *dimensionesm2)
{
	if (dimensionesm1->renglones == dimensionesm2->renglones && dimensionesm1->columnas == dimensionesm2->columnas)
		return 1;
	else
		return 0;
}

int validamultiplicabilidad(DimensionesMatriz *dimensionesm1, DimensionesMatriz *dimensionesm2)
{
	if(dimensionesm1->columnas == dimensionesm2->renglones)
		return 1;
	else
		return 0;
}

void transpuestaMatrizInt(int m1[][100], DimensionesMatriz *dimensionesm1, int MatrizResultante[][100])
{
	for(int i=0; i< dimensionesm1->renglones; i++)
		for(int j=0; j< dimensionesm1->columnas; j++)
			MatrizResultante[i][j] = m1[j][i];
}

void imprimeMatrizInt(int m1[][100], DimensionesMatriz *dimensionesm1, DimensionesMatriz *dimensionesm2, int bandera)
{
	if(bandera==1) //imprime suma y resta, solo necesita una DimensionesMatriz
	{
		for(int i=0; i< dimensionesm1->renglones; i++)
			{
				for(int j=0; j< dimensionesm1->columnas; j++)
					printf("%d", m1[i][j]);
			}
			printf("\n");
	}
	if(bandera==2) //imprime multiplicacion
	{
		for(int i=0; i< dimensionesm1->renglones; i++)
			{
				for(int j=0; j< dimensionesm2->columnas; j++)
					printf("%d", m1[i][j]);
			}
			printf("\n");	
	}
	if(bandera==3) //imprime transpuesta
	{
			for(int i=0; i< dimensionesm1->columnas; i++)
			{
				for(int j=0; j< dimensionesm1->renglones; j++)
					printf("%d", m1[i][j]);
			}
			printf("\n");		
	}

}

void inicializaMatrizInt(int m1[][100], int m2[][100], DimensionesMatriz *dimensionesm1, DimensionesMatriz *dimensionesm2)
{
	srand(time(0));
	
	for (int i=0; i< dimensionesm1->renglones; i++)
	{
		for(int j=0; i< dimensionesm1->columnas; j++)
			m1[i][j] = rand() % 10;
	}
	
	for (int i=0; i<dimensionesm2->renglones; i++)
	{

		for(int j=0; i< dimensionesm2->columnas; j++)
			m2[i][j] = rand() % 105;
	}

}