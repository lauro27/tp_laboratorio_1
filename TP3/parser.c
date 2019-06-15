#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromText(FILE* pFile , LinkedList* pArrayListEmployee)
{
    char id[10];
    char horas[10];
    char sueldo[10];
    char nombre[50];
    Employee *r;
    while(!feof(pFile))
    {
        fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n", id, nombre, horas, sueldo);
        r = employee_newParametros(id, nombre,horas, sueldo);
        ll_add(pArrayListEmployee,r);
    }

    r->id = atoi(id);
    strcpy(r->nombre, nombre);
    r->horasTrabajadas = horas;
    r->sueldo = sueldo;
    return 1;
}

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromBinary(FILE* pFile , LinkedList* pArrayListEmployee)
{
    Employee *aux;
    while(!feof(pFile))
    {
        aux = employee_new();
        fread(aux, sizeof(Employee),1, pFile);
        ll_add(pArrayListEmployee,aux);
    }
    return 1;
}
