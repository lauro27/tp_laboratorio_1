#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "employee.h"
Employee* employee_new()
{
    return (Employee*) malloc(sizeof(Employee));
}

Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr, char* sueldoStr)
{
    Employee *r=employee_new();
    r->id = atoi(idStr);
    strcpy(r->nombre,nombreStr);
    r->horasTrabajadas = atoi(horasTrabajadasStr);
    r->sueldo = atoi(sueldoStr);
}

void employee_delete(Employee *this)
{
    if(this!= NULL)
    {
        free(this);
    }
}

int employee_setId(Employee* this,int id)
{
    if (this!= NULL)
    {
        this->id = id;
        return 1;
    }
    return 0;
}

int employee_getId(Employee* this,int* id)
{
    if (this!= NULL)
    {
        id = this->id;
        return 1;
    }
    return 0;
}

int employee_setNombre(Employee* this,char* nombre)
{
    if (this!= NULL)
    {
        strcpy(this->nombre,nombre);
        return 1;
    }
    return 0;
}

int employee_getNombre(Employee* this,char* nombre)
{
    if (this!= NULL)
    {
        strcpy(nombre, this->nombre);
        return 1;
    }
    return 0;
}

int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas)
{
    if (this!= NULL)
    {
        this->horasTrabajadas = horasTrabajadas;
        return 1;
    }
    return 0;
}
int employee_getHorasTrabajadas(Employee* this,int* horasTrabajadas)
{
    if (this!= NULL)
    {
        horasTrabajadas = this->horasTrabajadas;
        return 1;
    }
    return 0;
}

int employee_setSueldo(Employee* this,int sueldo)
{
    if (this!= NULL)
    {
        this->sueldo = sueldo;
        return 1;
    }
    return 0;
}

int employee_getSueldo(Employee* this,int* sueldo)
{
    if (this!= NULL)
    {
        sueldo = this->sueldo;
        return 1;
    }
    return 0;
}

/*
printf("Ingrese ID: ");
    scanf("%d", &id);
    employee_setId(r, id);
    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(nombre);
    employee_setNombre(r, nombre);
    printf("Ingrese horas trabajadas: ");
    scanf("%d", &id);
    employee_setId(r, id);
    printf(Ingrese sueldo: );
    scanf("%d", &sueldo);
*/
