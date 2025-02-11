#include <stdio.h>

char* welcome() {
    long int num;
    scanf("%ld" , &num);
    if (num<0)
    num *= -1;
    int arr[32];
    for (int i=0; i<=31; i++) {
        arr[i] = 0;
    }
    int i = 0;
    while (num != 0){
        arr[i] += num%2;
        i += 1;
        num /= 2;
    }
    if (arr[32-1] == 1){
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