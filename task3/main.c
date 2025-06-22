#include <stdio.h>

int main() {
    float sales_volume;
    float commission_rate = 0.05; // 5%
    float commission;

    // Prompt the user to enter the sales volume
    printf("Enter the sales volume in UGX: ");
    scanf("%f", &sales_volume);

    // Calculate the commission
    commission = sales_volume * commission_rate;

    // Display the commission
    printf("The commission for sales of UGX %.2f at 5%% rate is: UGX %.2f\n", sales_volume, commission);
    system("pause");

    return 0;
}
