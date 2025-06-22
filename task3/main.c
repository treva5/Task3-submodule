#include <stdio.h>

int main() {
    float customer1 = 200; // UGX
    float customer2 = 500; // UGX
    float customer3 = 300; // UGX
    float total_revenue;

    // Calculate total revenue
    total_revenue = customer1 + customer2 + customer3;

    // Display the total revenue
    printf("Total revenue from the customers: UGX %.2f\n", total_revenue);
    system("pause");

    return 0;
}
