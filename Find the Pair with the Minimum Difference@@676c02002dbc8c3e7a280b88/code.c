#include<stdio.h>
int main(){
    int N;
    scanf("%d" , &N);
    int arr[N];
    for(int i = 0; i<N; i++){
        scanf("%d" , &arr[i]);
    }
    int min = 1000000;
    int num1 = 10000, num2 = 10000;
    if(N < 2){
        printf("-1");
        return -1;
    }
    else{
        for(int i = 0; i<N; i++){
            for(int j = i+1; j<N; j++){
                if(arr[i]>=arr[j] && (arr[i]-arr[j])==min && arr[i]<num1 && arr[j]<num2){
                    min = arr[i] - arr[j];
                    num1 = arr[i];
                    num2 = arr[j];
                }
                else if(arr[j]>=arr[i] && (arr[j]-arr[i])==min && arr[j]<num1 && arr[i]<num2){
                    min = arr[j]-arr[i];
                    num1 = arr[j];
                    num2 = arr[i];
                }
                else if(arr[i]>=arr[j] && (arr[i]-arr[j])<min){
                    min = arr[i] - arr[j];
                    num1 = arr[i];
                    num2 = arr[j];
                }
                else if(arr[j]>=arr[i] && (arr[j]-arr[i])<min){
                    min = arr[j]-arr[i];
                    num1 = arr[j];
                    num2 = arr[i];
                }
            }
        }
    }
    printf("%d %d" , num2 , num1);
    return 0;
}