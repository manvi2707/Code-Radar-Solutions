#include <stdio.h>

int pow(num , power){
    int res = 1;
    for(int i = 0; i < power; i++){
        res *= num;
    }
    return res;
}
int main(){
    int num;
    scanf("%d" , &num);
    int n = 0;
    int arr[32];
    while(num != 0){
        int rem = num % 2;
        arr[n] = !rem;
        n += 1;
        num = num / 2;
    }
    for (int i = n; i < 33; i++){
        arr[i] = !0;
    }
    int req = 0;
    for(int i = 0; i < 33; i++){
        if (arr[i] == 1){
            req += pow(2 , i);
            }
    }
   printf("%d" , req);
   return 0; 
}