#include<stdio.h>
int kangaroo(int x1 , int v1 , int x2 , int v2){
    int n;
    n = (x2 - x1)/(v1-v2);
    if(n >=0){
        return n;
    }
    else{
        return -1;
    }
}