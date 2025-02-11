#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int my_pow(int base , int exp){
  int res = 1;
  for (int i = 0; i < exp; i++){
    res = res * base;
  }
  return res;
  }
int welcome() {
    int num , bit;
    int n = 0;
    int rem;
    int arr[32];
    scanf("%d %d" , &num , &bit);
    while (num != 0){
        rem = num % 2;
        num = num / 2;
        arr[n] = rem;
        n += 1;
    }
    arr[bit] = 0;
    int new_num = 0;
    for (int i = 0; i < n; i++){
      if (arr[i] == 1){
        new_num += my_pow(2 , i);
      }
    }
    return(new_num);
    
}

int main() {
    printf("%d", welcome());
    return 0;
}