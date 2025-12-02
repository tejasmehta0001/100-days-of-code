//Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>
#include <stdlib.h>

struct employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct employee e1, e2;
    FILE *fp;

    printf("Enter Employee ID: ");
    scanf("%d", &e1.id);

    printf("Enter Employee Name: ");
    scanf("%s", e1.name);

    printf("Enter Employee Salary: ");
    scanf("%f", &e1.salary);

    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    fwrite(&e1, sizeof(struct employee), 1, fp);
    fclose(fp);

    printf("\nEmployee details entered and stored in file.\n");

    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    fread(&e2, sizeof(struct employee), 1, fp);
    fclose(fp);

    printf("\nDisplaying employee data read from file:\n");
    printf("ID      : %d\n", e2.id);
    printf("Name    : %s\n", e2.name);
    printf("Salary  : %.2f\n", e2.salary);

    return 0;
}