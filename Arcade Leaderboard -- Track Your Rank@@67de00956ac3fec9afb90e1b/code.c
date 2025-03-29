#include<stdio.h>
void trackPlayerRanks(int ranked[] , int n, int player[] , int m , int result[]){
    int new_ranked[100];
    int j = 0;
    for(int i = 0; i<n-1; i++){
        if (ranked[i] != ranked[i+1]){
            new_ranked[j] = ranked[i];
            j++;
        }
    }
    if(ranked[n-1] != ranked[n-2]){
        new_ranked[j] = ranked[n-1];
        j++;
    }
    int p = 0;
    for(int i = 0; i<m; i++){
        new_ranked[j] = player[i];
        j++;
        for(int k = 0; k<j; k++){
            if(new_ranked[i] < new_ranked[i+1]){
                int temp = new_ranked[i];
                new_ranked[i] = new_ranked[i+1];
                new_ranked[i+1] = temp;
            }

        }
        int s = 0;
        while(s != j){
            if(new_ranked[s] == player[i]){
                result[p] = s;
                p++;
            }
            else{
                s++;
            }
        }
    }

}