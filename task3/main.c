#include <stdio.h>

int main() {
    float asset_cost, residual_value;
    int useful_life;
    float depreciation;

    // Input asset cost
    printf("Enter the asset cost in UGX: ");
    scanf("%f", &asset_cost);

    // Input residual value
    printf("Enter the residual value in UGX: ");
    scanf("%f", &residual_value);

    // Input useful life in years
    printf("Enter the useful life in years: ");
    scanf("%d", &useful_life);

    // Calculate depreciation
    depreciation = (asset_cost - residual_value) / useful_life;

    // Display the result
    printf("Annual depreciation: UGX %.2f\n", depreciation);
    system("pause");

    return 0;
}
