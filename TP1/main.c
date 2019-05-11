#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"

int main()
{
    float vara = 0.0f;
    float varb = 0.0f;

    float sumaFin = 0;
    float restaFin = 0;
    float divisionFin = 0;
    float multiFin = 0;
    float factAFin = 0;
    float factBFin = 0;

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
        sumaFin = suma(vara,varb);
    restaFin= resta(vara,varb);
    divisionFin= division(vara,varb);
    multiFin= multiplicacion(vara,varb);
    factAFin= factorialA(vara);
    factBFin= factorialB(varb);
        //calcularTodo(vara, varb, sumaFin, restaFin, divisionFin, multiFin, factAFin, factBFin);
        system("pause");
        break;
    case 4:
        mostrarTodo(sumaFin, restaFin, divisionFin, multiFin, factAFin, factBFin);
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
    return 0;
}

