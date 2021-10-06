#include <stdio.h>
#include <stdint.h>

int main() {
    int32_t N, num_count = 0;
    float T, sum = 0;


    printf("Enter number of lines:\n");
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        printf("Enter line 1 (end with -1):\n");

        scanf("%f", &T);
        while(T != -1.0){
            num_count++;
            sum += T;
            scanf("%f", &T);
        }

        printf("Average = %.2f\n", sum/(float) num_count);

        // reset T, sum, num_count
        T = 0;
        num_count = 0;
        sum = 0;
    }

    return 0;
}
