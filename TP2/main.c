#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "employee.h"

#define MAXEMPLOYEES 1000

int main()
{
    int op, searchId;
    eEmployee lista[MAXEMPLOYEES];
    initEmployees(lista, MAXEMPLOYEES);
    do
    {
        printf("1.ALTA\n2.BAJA\n3.MODIFICACION\n4.MOSTRAR\n5.SALIR\nSeleccion: ");
        scanf("%d", &op);

        switch(op)
        {
        case 1:
            addEmployee(lista, MAXEMPLOYEES);
            break;
        case 2:
            searchId = inputEmployeeId();
            removeEmployee(lista, MAXEMPLOYEES,searchId);
            break;
        case 3:
            searchId = inputEmployeeId();
            editEmployee(lista,searchId);
            break;
        case 4:
            printEmployees(lista, MAXEMPLOYEES);
            break;
        }
        system("cls");
    }while(op != 5);
}
