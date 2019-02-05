typedef struct 
{
	int renglones;
	int columnas;
}DimensionesMatriz;


void captura(DimensionesMatriz *, char);
void sumaMatrizInt(int m1[][100], int m2[][100], DimensionesMatriz * , int mresult[][100]);
void restaMatrizInt(int m1[][100], int m2[][100], DimensionesMatriz * , int mresult[][100]);
void multiplicaMatrizInt(int m1[][100], int m2[][100], DimensionesMatriz *, DimensionesMatriz *, int mresult[][100]);
void transpuestaMatrizInt(int m1[][100], DimensionesMatriz *,int mresult[][100]);
int validacuadratura(DimensionesMatriz *, DimensionesMatriz *);
int validamultiplicabilidad(DimensionesMatriz *, DimensionesMatriz *);
void imprimeMatrizInt(int m1[][100], DimensionesMatriz *, DimensionesMatriz *, int bandera);
void inicializaMatrizInt(int m1[][100], int m2[][100], DimensionesMatriz *, DimensionesMatriz *);