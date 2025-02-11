#include <stdio.h>

char* welcome() {
    int num = 2147483648;
    int arr[32];
    int i = 0;
    while (num != 0){
        int rem = num % 2;
        arr[i]  = rem;
        i += 1;
        num = num / 2;
    }
    if (num == 0){
      printf("Not Set");
    }
    else if (arr[i-1] == -1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}

int main() {
    welcome();
    return 0;
}