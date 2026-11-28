#include <stdio.h>

struct Employee {
    int employeeId;
    char name[50];
    float salary;
};

int main(void) {
    struct Employee employee = {201, "Rohan", 35000.0f};

    printf("Employee Details\n");
    printf("Employee ID: %d\n", employee.employeeId);
    printf("Name: %s\n", employee.name);
    printf("Salary: %.2f\n", employee.salary);

    return 0;
}
