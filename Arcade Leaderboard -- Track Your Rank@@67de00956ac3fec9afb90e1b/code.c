#include<stdio.h>
void trackPlayerRanks(int ranked[] , int n, int player[] , int m , int result[]){
    int unique[m+n];
    int j = 0;
    for(int i = 0; i<n-1; i++){
        if(ranked[i] != ranked[i+1]){
            unique[j] = ranked[i];
            j++;
        }
    }
    if(ranked[n-1] != ranked[n-2]){
        unique[j] = ranked[n-1];
    }
    for(int i = 0; i<=j; i++){
    printf("%d " , unique[i]);
    }
    
    int position;
    int p = 0;
    for(int i = 0; i<m; i++){
        for(int k = j; k>=0; k--){
            if(player[i] < unique[j]){
                unique[j+1] = player[i];
                position = j+2;
                result[p] = position;
                break;
            }
            else if(player[i] > unique[k]){
                unique[k+1] = unique[k];
                unique[k] = player[i];
                position = k+1;
                result[p] = position;
            }
            else if(player[i] == unique[k]){
                unique[k+1] = unique[k];
                unique[k] = player[i];
                position = k+1;
                result[p] = position;
            }
        }
        j++;
        p++;
    }
}