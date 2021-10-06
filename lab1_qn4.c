#include <stdio.h>
#include <stdint.h>

int main() {
    uint8_t MAX = 10;
    double X, numerator = 1, denominator = 1, result = 1;

    printf("Enter x:\n");
    scanf("%lf", &X);
    for (uint8_t i = 0; i < 10; i++) {
        numerator *= X;
        denominator *= i+1;
        result += (numerator / denominator);
    }
    printf("Result = %.2lf", result);


    return 0;
}
