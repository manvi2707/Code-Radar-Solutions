#include<stdio.h>
int main(){
    int N;
    scanf("%d" , &N);
    int arr[N];
    for(int i = 0; i<N; i++){
        scanf("%d" , &arr[i]);
    }
    int num = N;
    for(int i = 0; i<N-2; i++){
        if(arr[i] == arr[i+1] && arr[i] == arr[i+2]){
            arr[i+2] = 0;
            num--;
        }
    }
    int T;
    scanf("%d" , &T);
    for(int i = 0; i<N; i++){
        for(int j = i+1; j<N; j++){
            if(arr[i]+arr[j] == T){
                printf("%d %d\n" , arr[i] , arr[j]);
            }
        }
    }
    return 0;
}
