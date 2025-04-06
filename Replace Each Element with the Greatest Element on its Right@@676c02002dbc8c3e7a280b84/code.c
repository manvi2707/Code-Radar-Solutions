#include<stdio.h>
int main(){
    int n;
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d" , &arr[i]);
    }
    int arr_new[n];
    int max = arr[p];
    int k = 0;
    int p = 1;
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[j]>max){
                max = arr[j];
            }
        }
        arr_new[k] = max;
        max = arr[p+1];
        k++;
    }
    arr_new[k] = -1;
    for(int i = 0; i<n; i++){
        printf("%d " , arr_new[i]);
    }
    return 0;
}