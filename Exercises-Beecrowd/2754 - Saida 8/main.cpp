#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    double primeira = 234.345;
    double segunda = 45.698;

    printf("%.6f - %.6f\n", primeira, segunda);
    printf("%.0f - %.0f\n", primeira, segunda);
    printf("%.1f - %.1f\n", primeira, segunda);
    printf("%.2f - %.2f\n", primeira, segunda);
    printf("%.3f - %.3f\n", primeira, segunda);

    printf("%e - %e\n", primeira, segunda);

    printf("%E - %E\n", primeira, segunda);

    printf("%g - %g\n", primeira, segunda);
    printf("%g - %g\n", primeira, segunda);

    return 0;
}
