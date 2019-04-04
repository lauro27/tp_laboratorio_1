#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"

int main()
{
    int vara= 0;
    int varb= 0;
    char finish = 'n';

    do
    {

    switch(seleccion(vara, varb))
    {
    case 1:
        vara = setVarA();
        break;
    case 2:
        varb = setVarB();
        break;
    case 3:
        calcularTodo();
        break;
    case 4:
        mostrarTodo();
        break;
    case 5:
        finish = 'y';
        break;
    default:
        finish = 'n';
        break;
    }
    }while(finish == 'n');

}
