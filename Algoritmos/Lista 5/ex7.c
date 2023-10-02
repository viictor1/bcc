/*7. Escreva uma função que recebe uma lista de empregados (Employee) e seu tamanho. A função
deve calcular e imprimir: o total dos salários, a média dos salários e as médias dos salários por tipo
de empregado (“Developer”, “Designer”, “Manager” ou “Support”).*/

#include <stdio.h>

typedef struct employee {
    char name[50];
    float salary;
    int type; // 0 - Developer, 1 - Designer, 2 - Manager, 3 - Support
} Employee;

void employeesReport(int size, Employee employees[]){
    float totalSalary = 0;    
    float salaryByType[4] = {0};
    float employeesByType[4] = {0};

    for(int i = 0; i < size; i++){
        totalSalary += employees[i].salary;
        salaryByType[employees[i].type] += employees[i].salary;
        employeesByType[employees[i].type] += 1;
    }

    printf("Total Salary: %.2f\n", totalSalary);
    printf("Average Salary: %.2f\n", totalSalary/size);
    printf("Average Salary Dev: %.2f\n", salaryByType[0] / employeesByType[0]);
    printf("Average Salary Designer: %.2f\n", salaryByType[1] / employeesByType[1]);
    printf("Average Salary Manager: %.2f\n", salaryByType[2] / employeesByType[2]);
    printf("Average Salary Support: %.2f\n", salaryByType[3] / employeesByType[3]);
}

int main(){
    Employee employees[] = {
        {"Alice", 50000.0, 0}, // Developer
        {"Bob", 60000.0, 0},   // Developer
        {"Charlie", 45000.0, 1}, // Designer
        {"David", 75000.0, 2},  // Manager
        {"Eve", 40000.0, 3}     // Support
    };

    employeesReport(5, employees);
}