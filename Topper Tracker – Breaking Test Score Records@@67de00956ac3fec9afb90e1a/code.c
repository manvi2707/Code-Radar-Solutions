#include<stdio.h>
int* trackScores(int scores[] , int n , int result){
    int max_num = 0; 
    int min_num = 0;
    int max = score[0];
    int min = score[0];
    for(int i = 1; i<n; i++){
        if(score[i]>max){
            max_num++;
            max = score[i];
        }
        if(score[i]<min){
            min_num++;
            min = score[i];
        }
    }
    result[0] = max;
    result[1] = min;
    return result;
}