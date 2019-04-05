#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"

float sumaFin = 0;
float restaFin = 0;
float divisionFin = 0;
float multiFin = 0;
float factAFin = 0;
float factBFin = 0;

void calcularTodo(float a, float b);
void mostrarTodo();

int main()
{
    float vara = 0;
    float varb = 0;
    char finish = 'n';

    do
    {
    switch(seleccion(vara, varb))
    {
    case 1:
        vara = setVarA();
        system("pause");
        break;
    case 2:
        varb = setVarB();
        system("pause");
        break;
    case 3:
        calcularTodo(vara, varb);
        system("pause");
        break;
    case 4:
        mostrarTodo();
        system("pause");
        break;
    case 5:
        finish = 'y';
        system("pause");
        break;
    default:
        finish = 'n';
        system("pause");
        break;
    }
    }while(finish == 'n');

}

void calularTodo(float a, float b)
{
    sumaFin = suma(a,b);
    restaFin = resta(a,b);
    divisionFin = division(a,b);
    multiFin = multiplicacion(a,b);
    factAFin = factorialA(a);
    factBFin = factorialB(b);
}

void mostrarTodo()
{
    printf("\nSuma: \t%f", sumaFin);
    printf("\nResta: \t%f", restaFin);
    printf("\nDivision: \t%f", divisionFin);
    printf("\nMultiplicacion: \t%f", multiFin);
    printf("\nFactorial de A: \t%f", factAFin);
    printf("\nFactorial de B: \t%f \n", factBFin);
}
