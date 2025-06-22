#include <stdio.h>

int main() {
    int total_sales;
    int days = 30;
    float average_sales;

    // Prompt user to enter total sales
    printf("Enter total sales in UGX: ");
    scanf("%d", &total_sales);

    // Calculate average sales with typecasting
    average_sales = (float)total_sales / days;

    // Output the result
    printf("Average sales per day: UGX %.2f\n", average_sales);
    system("pause");

    return 0;
}
