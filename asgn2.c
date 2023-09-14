#include <stdio.h>

void cubeOfOdd(int n) {
    for (int i = 0; i < n; i++) {
        if (i % 2 != 0) {
            printf("%d^3 = %d\n", i, i * i * i);
        }
    }
}

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    cubeOfOdd(n);

    return 0;
}
