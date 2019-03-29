#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"

/*manejo de menu*/
int seleccion(int a, int b)
{
    system("cls");
    int opcion;
    printf("Seleccione la operacion:\n\n1.\tIngresar 1er operando (A = %d)\n2.\tIngresar 2do operando (B = %d)\n3.\tCalcular todas las operaciones.\n4.\tInformar todos los resultados\n5.\tFinalizar\nSeleccion: ")
    scanf("%d", opcion);
    return opcion;
}

/***********************/
/**manejo de variables**/
/***********************/

int setVarA()
{
    int a;
    printf("Ingrese el nuevo valor de el primer operando: ");
    scanf("%d", a);
    return a;
}

/**AGREGAR SET VAR B

/***************/
/**operaciones**/
/***************/
int suma(int a, int b)
{
    return a + b;
}

int resta(int a, int b)
{
    return a - b;
}

float division(int a, int b)
{
    return (float)a / b;
}

int multiplicacion(int a, int b)
{
    return a * b;
}

int factorial(int a, int b)
{
    int i;
    int factorA;
    int factorB;
    if (a>0)
    {
        for (i = a; i>0; i--)
        {
            factorA += i;
        }
    }
    else
    {
        //lidiar con factorial negativo?
    }
        for (i = b; i>0; i--)
        {
            factorB += i;
        }
        return factorA, factorB;
}
