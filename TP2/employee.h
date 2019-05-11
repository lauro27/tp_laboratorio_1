#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

typedef struct{
 int id;
 char name[51];
 char lastName[51];
 float salary;
 int sector;
 int isEmpty;
}eEmployee;

#endif // EMPLOYEE_H_INCLUDED

void initEmployees(eEmployee[],int);//DONE

void addEmployee (eEmployee[],int);//DONE

eEmployee inputEmployee();//DONE

int findEmployeeById(eEmployee[], int, int);//DONE

int removeEmployee(eEmployee[], int,int);//DONE

void sortEmployees(eEmployee[], int, int);//Done?

void printEmployees(eEmployee[],int);//done

int indexDisponible(eEmployee[],int);//DONE

int inputEmployeeId();//done

void editEmployee(eEmployee[],int);

void mostrarError(char[]);//DONE
