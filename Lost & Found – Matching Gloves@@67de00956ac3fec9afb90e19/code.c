#include<stdio.h>
int countGlovePairs(int gloves[] , int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(gloves[i]<gloves[j]){
                int temp = gloves[i];
                gloves[i] = gloves[j];
                gloves[j] = temp;
            }
        }
    }
    int count = 1;
    int pair = 0;
    for(int i = 1; i<n; i++){
        if(gloves[i] == gloves[i-1]){
            count+=1;
        }
        else{
            pair += count/2;
            count = 1;
        }
    }
    pair += count/2;
    return pair;
}