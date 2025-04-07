#include<stdio.h>
int findUnsortedSubarray(int arr[] , int n){
    int num = num[0];
    int count = 1;
    for(int i = 0; i<n; i++){
        if(num[i] == num){
            num++;
        }
        elseif(num[i] != num && num[i] == num[i-1]){
            continue;
        }
        else{
            count += 1;
            num++;
        }
    }
    return count;
}
