#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"



/*manejo de menu*/
int seleccion(float a, float b)
{
    system("cls");
    int opcion = 0;
    printf("Seleccione la operacion:\n\n1.\tIngresar 1er operando (A = %f)\n2.\tIngresar 2do operando (B = %f)\n3.\tCalcular todas las operaciones.\n4.\tInformar todos los resultados\n5.\tFinalizar\nSeleccion: ", a, b);
    scanf("%d", &opcion);
    fflush(stdin);
    return opcion;
}

/***********************/
/**manejo de variables**/
/***********************/

float setVarA()
{
    float a;
    printf("Ingrese el nuevo valor de el primer operando: ");
    scanf("%f", &a);
    fflush(stdin);
    return a;
}

float setVarB()
{
    float b;
    printf("Ingrese el nuevo valor de el segundo operando: ");
    scanf("%f", &b);
    fflush(stdin);
    return b;
}


/***************/
/**operaciones**/
/***************/
float suma(float a, float b)
{
    return a + b;
}

float resta(float a, float b)
{
    return a - b;
}

float division(float a, float b)
{
    if (b== 0)
    {
        printf("Error: Division por cero\n");
        return 0;
    }
    else
    {
        return (float)a / b;
    }
}

float multiplicacion(float a, float b)
{
    return a * b;
}

float factorialA(float a)
{
    a = (int) a;
    float i;
    float factorA = 0;

    if (a>=0)
    {
        for (i = a; i>0; i--)
        {
            factorA += i;
        }
    }
    else
    {
        printf("Error: A es factorial negativo");
    }
    return factorA;
}

float factorialB(float b)
{
    b = (int) b;
    float i;
    float factorB = 0;

    if (b>=0)
    {
        for (i = b; i>0; i--)
        {
            factorB += i;
        }
    }
    else
    {
        printf("Error: B es factorial negativo");
    }
    return factorB;
}
