#include <stdio.h>

char* welcome() {
    long int num;
    scanf("%ld" , &num);
    int arr[32];
    int i = 0;
    while (num != 0){
        arr[i] = num%2;
        i += 1;
        num /= 2;
    }
    if (arr[i] == 1){
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