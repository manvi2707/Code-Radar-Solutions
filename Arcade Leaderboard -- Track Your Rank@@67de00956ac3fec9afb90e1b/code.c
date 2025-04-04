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
    int position;
    int p = 0;
    for(int i = 0; i<m; i++){
        for(int k = j; k<=0; k--){
            if(player[i] > unique[k]){
                unique[k+1] = unique[k];
                unique[k] = player[i]; 
                printf("%d\n" , k);
                position = k;
            }
            else if(player[i] < unique[j]){
                unique[j+1] = player[i];
                position = j+1;
            }
        }
        j = sizeof(unique) / sizeof(int);
        ranked[p] = position;
    }
}