#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "employee.h"

#define LIBRE 0
#define OCUPADO 1
#define BORRADO -1

#define TRUE 1
#define FALSE 0

void initEmployees(eEmployee lista[],int s)
{
    int i;
    for(i = 0; i < s;i++)
    {
        lista[i].id = i;
        strcpy(lista[i].name, "");
        strcpy(lista[i].lastName, "");
        lista[i].salary = 0;
        lista[i].sector = 0;
        lista[i].isEmpty = LIBRE;
    }
}

void addEmployee(eEmployee l[], int tam)
{
    int index = indexDisponible(l, tam);
    if (index == -1)
    {
        mostrarError("Full Array");
    }
    else
    {
        l[index] = inputEmployee();
        l[index].id = index;
    }
}

int indexDisponible(eEmployee list[], int tam)
{
    int i;
    int index = -1;

    for(i = 0; i < tam; i++)
    {
        if (list[i].isEmpty == 0)
        {
            index = i;
            break;
        }
    }
    return index;
}

eEmployee inputEmployee()
{
    eEmployee e;

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(e.name);


    printf("Ingrese Apellido: ");
    fflush(stdin);
    gets(e.lastName);

    printf("Ingrese salario: ");
    fflush(stdin);
    scanf("%f", &e.salary);

    printf("Ingrese sector: ");
    fflush(stdin);
    scanf("%d", &e.sector);

    e.isEmpty = OCUPADO;

    return e;
}

int findEmployeeById(eEmployee l[],int tam, int id)
{
    int index;
    for(index = 0; index < tam; index++)
    {
        if(id == l[index].id)
        {
            return index;
        }
    }
    return -1;
}

int removeEmployee(eEmployee l[],int tam, int id)
{
    int i;
    int found = FALSE;

    for(i = 0; i < tam; i++)
    {
        if(id == l[i].id)
        {
            l[i].isEmpty = BORRADO;
            found = TRUE;
            break;
        }
    }

    if(found == FALSE)
    {
        mostrarError("ID Not Found");
    }

    return 0;
}

void sortEmployees(eEmployee l[], int tam, int orden)
{
    int i, j;
    eEmployee aux;
    for(i = 0; i< tam; i++)
    {
        for(j = i+1; j<tam;j++)
        {
            if(orden == 1)
            {
                if(strcmp(l[i].lastName,l[j].lastName) < 0)
                {
                    aux = l[j];
                    l[j] = l[i];
                    l[i] = aux;
                }
            }
            else
            {
                if(strcmp(l[i].lastName,l[j].lastName) > 0)
                {
                    aux = l[j];
                    l[j] = l[i];
                    l[i] = aux;
                }
            }
        }
    }
}

void printEmployees(eEmployee l[],int tam)
{
    int i;
    for(i = 0; i < tam; i++)
    {
        if(l[i].isEmpty == 1)
        {
            printf("%5d %15s %15s %15.2f %5d\n", l[i].id, l[i].name, l[i].lastName, l[i].salary, l[i].sector);
        }
    }
    system("pause");
}

int inputEmployeeId()
{
    int i;
    printf("Ingrese Id: ");
    fflush(stdin);
    scanf("%d", &i);
    return i;
}

void editEmployee(eEmployee l[],int index)
{
    int opcion;
    printf("1.Editar Nombre\n2.Editar Apellido\n3.Editar Salario\n4.Editar Sector\n5.SALIR\nSeleccion: ");
    scanf("%d", &opcion);

    switch(opcion)
    {
    case 1:
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(l[index].name);
        break;
    case 2:
        printf("Ingrese Apellido: ");
        fflush(stdin);
        gets(l[index].lastName);
        break;
    case 3:
        printf("Ingrese salario: ");
        fflush(stdin);
        scanf("%f", &l[index].salary);
        break;
    case 4:
        printf("Ingrese sector: ");
        fflush(stdin);
        scanf("%d", &l[index].sector);
        break;
    }
}

void mostrarError(char error[])
{
    system("cls");
    system("color 47");
    printf("ERROR: %s\n", error);
    system("pause");
    system("color 07");
}
