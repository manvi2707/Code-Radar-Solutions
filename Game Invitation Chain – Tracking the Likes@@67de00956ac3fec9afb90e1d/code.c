#include<stdio.h>
int totalLikes(int n){
    if(n == 0){
        int liked = 0;
        return liked;
    }
    int start = 5;
    int liked = 5/2;
    int shared;
    int liked_new = liked;
    for(int i = 1; i<n; i++){
        shared = liked_new*3;
        liked_new = shared/2;
        liked += liked_new;
    }
    return liked;
}