#include<stdio.h>
int main(){
    int N;
    scanf("%d" , &N);
    int arr[N];
    for(int i = 0; i<N; i++){
        scanf("%d" , &arr[i]);
    }
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            if(arr[i]<arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int p;
    for(int i = 0 ; i<N; i++){
        if(arr[i] == 1){
            p = i;
        }
    }
    int num = 1;
    bool term;
    for(int i = p; i<N; i++){
        if(num == arr[i]){
            num++;
            term = true;
        }
        else{
            printf("%d" , num);
            term = false;
            break;
        }
    }
    if(term){
        printf("%d" , num);
    }
    return 0;
}