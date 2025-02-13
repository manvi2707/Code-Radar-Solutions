#include <stdio.h>

int main() {
    unsigned int num;  // Use unsigned for proper bitwise operations
    scanf("%u", &num);

    int arr[32];
    int n = 0;

    // Convert to binary and flip bits
    for (int i = 0; i < 32; i++) {
        int rem = num % 2;
        arr[i] = rem ^ 1; // XOR with 1 flips bits
        num /= 2;
    }

    // Convert back to integer
    unsigned int req = 0;
    for (int i = 0; i < 32; i++) {
        if (arr[i] == 1) {
            req += (1U << i); // Use bitwise shift instead of pow()
        }
    }

    printf("%u\n", req);
    return 0;
}
