#include <stdio.h>
 
int main() {
    int cod, horas;
    float salary_total, salario;
 
    scanf("%d", &cod);
    scanf("%d", &horas);
    scanf("%d", &salario);
 
    salary_total = salario*horas;
 
    printf("NUMBER = %d\n", cod);
    printf("SALARY = U$ %.2f\n", salary_total);
 
 
    return 0;
}
