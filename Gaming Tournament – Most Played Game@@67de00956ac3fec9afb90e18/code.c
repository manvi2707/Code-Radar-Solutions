#include<stdio.h>
int mostPlayedGame(int games[] , int n){
    int uni[n];
    uni[0] = games[0];
    int j = 1;
    for(int i = 1; i<n; i++){
        if(games[i] != games[i-1]){
            uni[j] = games[i];
            j++;
        }
    }
    for(int i = 0; i<j; i++){
        for(int k = 0; k<j; k++){
            if(uni[i]<uni[k]){
                int temp = uni[i];
                uni[i] = uni[k];
                uni[k] = temp;
            }
        }
    }
    int num[j][2];
    int t = 0;
    int max = 0;
    for(int i = 0; i<j; i++){
        for(int k = 0; k<n; k++){
            if(games[k] == uni[i]){
                t++;
            }
        }
        num[i][0] = uni[i];
        num[i][1] = t;
        if(max < t){
            max = t;
        }
        t = 0;
    }
    int req;
    for(int i = 0; i<j; i++){
        if(num[i][2] == max){
            req = num[i][1];
        }
    }
    return req;
}