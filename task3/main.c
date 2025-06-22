#include <stdio.h>

int main() {
    float hourly_wage = 30; // UGX
    int hours_per_week = 40;
    int weeks_per_year = 52;
    float annual_salary;

    // Calculate annual salary
    annual_salary = hourly_wage * hours_per_week * weeks_per_year;

    // Display the result
    printf("Annual salary: UGX %.2f\n", annual_salary);
    system("pause");

    return 0;
}
