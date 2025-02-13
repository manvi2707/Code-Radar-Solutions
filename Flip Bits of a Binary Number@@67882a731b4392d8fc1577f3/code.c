#include <stdio.h>
#include <math.h>
int main(){
    unsigned int num;
    scanf("%d" , &num);
    int n = 0;
    int arr[32];
    while(num != 0){
        int rem = num % 2;
        arr[n] = 1 ^ rem;
        n += 1;
        num = num / 2;
    }
    for (int i = n; n < 32; i++){
        arr[n] = 0;
    }
    for (int i = n; i < 32; i++){
        arr[i] = 1;
    }
    int req = 0;
    for(int i = 0; i < 32; i++){
        if (arr[i] == 1){
            req += (1 << i);
            }
    }
   printf("%d" , req);
   return 0; 
}