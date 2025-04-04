#include<stdio.h>
int main(){
    int N;
    scanf("%d" , &N);
    int arr[N];
    for(int i = 0; i<N; i++){
        scanf("%d" , &arr[i]);
    }
    int T;
    scanf("%d" , &T);
    for(int i = 0; i<N; i++){
        for(int j = i; j<N; j++){
            if(i+j == T){
                printf("%d %d\n" , i , j);
            }
        }
    }
    return 0;
}
