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
    int arr = (int)malloc(100 * sizeof(int));
    scanf("%d %d" , &num , &bit);
    while (num != 0){
        rem = num % 2;
        num = num / 2;
        arr[n] = rem;
        n += 1;
    }
    int req = arr[bit];
    return req;
}

int main() {
    printf("%d", welcome());
    return 0;
}