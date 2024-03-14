#include <stdio.h>
#include <string.h>

typedef struct employee {
    int em_id;
    char em_name[10];
    int em_age;
    char em_phone[12];
    float em_salary;
} employee_t;

void employee_info(employee_t my_emp) {
    printf("%d\n", my_emp.em_id);
    printf("%s\n", my_emp.em_name);
    printf("%d\n", my_emp.em_age);
    printf("%s\n", my_emp.em_phone);
    printf("%f\n", my_emp.em_salary);
}

int main() {
    employee_t my_emp;

    FILE *file_out = fopen("employee.bin", "wb");
    if (file_out == NULL) {
        perror("Error opening file");
        return 1;
    }

    strcpy(my_emp.em_name, "IU Lee");
    strcpy(my_emp.em_phone, "0937123456");
    my_emp.em_id = 100;
    my_emp.em_age = 18;
    my_emp.em_salary = 1000.30;

    fwrite(&my_emp, sizeof(employee_t), 1, file_out);

    fclose(file_out);

    FILE *file_in = fopen("employee.bin", "rb");
    if (file_in == NULL) {
        perror("Error opening file");
        return 1;
    }

    fread(&my_emp, sizeof(employee_t), 1, file_in);

    fclose(file_in);

    employee_info(my_emp);

    return 0;
}
