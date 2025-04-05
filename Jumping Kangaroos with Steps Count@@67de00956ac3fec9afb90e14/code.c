#include<stdio.h>
int kangaroo(int x1 , int v1 , int x2 , int v2){
    int n;
    if(v1 != v2){
        n = (x2 - x1)/(v1-v2);
    }
    else if(v1 == v2 && x1 == x2){
        n = 0;
    }
    else if(v1 == v2 && x1 != x2){
        n = -1;
    }
    if(n >=0 && (x2 - x1)%(v1-v2) == 0){
        return n;
    }
    else{
        return -1;
    }
}