#include <stdio.h>



int validacion(float, float);
float calculaError(float , float);
float obtenerXs(float, float);
void Biseccion(float a, float b, float Es, float imax);

int main()
{
    float a,b,Es;
    int imax;



}

void Biseccion(float a, float b, float Es, int imax)
{
    int iteracion = 0;
    float Ea = 0, Xs = 0, Xs_anterior = 0;
    BIT Bit;

    do{
            Xs_anterior = Xs;
            Xs = obtenerXs(a,b);

            if (Xs_anterior!=0)
                Ea = calculaError(Xs,Xs_anterior);

            if( (validacion(a,b)) == 1 )
                Xs = b;
            else if ((validacion(a,b)) == 2)
                Xs = a;
            else
                printf("La raiz es: %f",Xs);

    }while(Ea<Es&&iteracion<imax);
}

int validacion(float a, float b)
{
    if (((-0.6 *a *a + 2.4*a + 5.5 )*(-0.6 *b *b + 2.4*b + 5.5 )) < 0 ) return 1;
    else if (((-0.6 *a *a + 2.4*a + 5.5 )*(-0.6 *b *b + 2.4*b + 5.5 )) > 0 ) return 2;
    else return 0;
}

float obtenerXs(float a, float b)
{
    float Xs;
    Xs = (a+b)/2;
    return Xs;
}


float calculaError(float Xs, float Xs_anterior)
{
    float resultado;

        if (Xs>Xs_anterior) resultado = ((Xs-Xs_anterior)/Xs)*100;
        else resultado = ((Xs-Xs_anterior)/Xs)*100;

    return resultado;
}
