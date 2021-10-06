#include <stdio.h>
#include <stdint.h>

int main() {
    uint16_t H, start = 1;

    printf("Enter the height:\n");
    scanf("%hd", &H);

    for(int i = 0; i < H; i++) {
        if (start == 4) start = 1;
        for(int j = 0; j < i+1; j++) {
            printf("%d", start);
        }
        printf("\n");
        start += 1;
    }


    return 0;
}
