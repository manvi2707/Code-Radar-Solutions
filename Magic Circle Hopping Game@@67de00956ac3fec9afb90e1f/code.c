#include<stdio.h>
int finalEnergy(int clouds[] , int n , int k){
    int energy = 100;
    int l;
    if((n-1)%k == 0){
        energy -= 0;
        l = n;
    }
    else{
        energy -= 1;
        l = ((n-1)/k)*k;
    }
    for(int i = k; i<=l; i+k){
        if(clouds[i] == 0){
            energy -= 1;
        }
        else if(clouds[i] == 1){
            energy -= 3;
        }
    }
    return energy;
}