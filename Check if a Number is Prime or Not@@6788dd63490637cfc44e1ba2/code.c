#include <stdio.h>

char* welcome() {
    int num;
    scanf("%d" , &num);
    int count = 0;
    for (int i = 2; i < num; i++){
        if (num % i == 0){
            count += 1
            break
        }
    }
    if (count == 0){
        return("Prime");
    }
    else{
        return("Not Prime");
    }
}

int main() {
    printf("%s", welcome());
    return 0;
}