#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"


/** \brief Carga los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_loadFromText(char* path , LinkedList* pArrayListEmployee)
{
    FILE *f;
    f = fopen("data.csv", "r");
    if ((f = fopen("data.csv", "r")) == NULL)
    {
        printf("Error de memoria");
        system("pause");
        return 0;
    }
    else
    {
        parser_EmployeeFromText(f, pArrayListEmployee);
        fclose(f);
    }
    return 1;
}

/** \brief Carga los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_loadFromBinary(char* path , LinkedList* pArrayListEmployee)
{
    FILE *f;
    f = fopen(path, "rb");
    if(f == NULL)
    {
        return 0;
    }
    parser_EmployeeFromBinary(f,pArrayListEmployee);
    fclose(f);
    printf("Archivo binario cargado.\n");
    system("pause");
    return 1;
}

/** \brief Alta de empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_addEmployee(LinkedList* pArrayListEmployee)
{
    int id, horas, sueldo;
    char nombre[50];
    Employee *r;
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
    printf("Ingrese sueldo: ");
    scanf("%d", &sueldo);

    ll_add(pArrayListEmployee,r);
    return 1;
}

/** \brief Modificar datos de empleado
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_editEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Baja de empleado
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_removeEmployee(LinkedList* pArrayListEmployee)
{
    int id, found =0;
    int i = 0;
    Employee *aux;
    printf("Seleccione ID: ");
    scanf("%d",&id);
    for(i = 0; i< pArrayListEmployee->size; i++)
    {
        aux = (Employee*)ll_get(pArrayListEmployee,i);
        if(aux->id == id)
        {
            ll_remove(pArrayListEmployee,i);
            found = 1;
            break;
        }
    }
    return found;
}

/** \brief Listar empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_ListEmployee(LinkedList* pArrayListEmployee)
{
    if (pArrayListEmployee == NULL)
    {
        return 0;
    }
    int i;
    printf("ID\tNOMBRE\tHORAS\tSUELDO\n");
    Employee *aux;
    for(i = 0; i< pArrayListEmployee->size; i++)
    {
        aux = ll_get(pArrayListEmployee,i);
        printf("%d\t%15s\t%d\t%d\n",aux->id, aux->nombre, aux->horasTrabajadas, aux->sueldo);
    }
    system("pause");
    return 1;
}

/** \brief Ordenar empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_sortEmployee(LinkedList* pArrayListEmployee)
{
    if(pArrayListEmployee == NULL)
    {
        return 0;
    }
    //ll_sort(pArrayListEmployee,compareByName,1);
    return 1;
}

/** \brief Guarda los datos de los empleados en el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_saveAsText(char* path , LinkedList* pArrayListEmployee)
{
    FILE *f;
    Employee *aux;
    int id, horas,sueldo;
    char nombre[50];
    int i;
    if(pArrayListEmployee == NULL)
    {
        return 0;
    }
    f = fopen(path,"w");
    if(f == NULL)
    {
        return 0;
    }
    for(i = 0; i< pArrayListEmployee->size; i++)
    {
        aux = (Employee*)ll_get(pArrayListEmployee, i);
        employee_getId(aux, &id);
        employee_getNombre(aux, nombre);
        employee_getSueldo(aux, &sueldo);
        employee_getHorasTrabajadas(aux, &horas);
        fprintf(f, "%d,%s,%d,%d\n", id, nombre, horas, sueldo);
    }
    fclose(f);
    return 1;
}

/** \brief Guarda los datos de los empleados en el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_saveAsBinary(char* path , LinkedList* pArrayListEmployee)
{
    FILE *f;
    int i;
    Employee *aux;
    f = fopen(path, "wb");
    if(pArrayListEmployee == NULL||f == NULL)
    {
        return 0;
    }
    for(i = 0; i< pArrayListEmployee->size;i++)
    {
        aux = ll_get(pArrayListEmployee,i);
        fwrite(aux,sizeof(Employee),1,f);


    }
    fclose(f);
    return 1;
}

