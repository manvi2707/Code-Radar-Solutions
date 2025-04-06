#include<stdio.h>
int main(){
    int n;
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d" , &arr[i]);
    }
    int arr_new[n];
    int max = arr[1];
    int k = 0;
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[j]>max){
                max = arr[j];
            }
        }
        arr_new[k] = max;
        max = arr[i+1];
        k++;
    }
    arr_new[k] = -1;
    for(int i = 0; i<n; i++){
        printf("%d\n" , arr_new[i]);
    }
    return 0;
}