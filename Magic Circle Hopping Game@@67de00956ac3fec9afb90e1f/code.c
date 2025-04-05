#include<stdio.h>
int finalEnergy(int clouds[] , int n , int k){
    int energy = 100;
    new_index = (0+k)%n;
    while(new_index != 0){
        if(clouds[new_index] == 0){
            energy -= 1;
        }
        else{
            energy -= 3;
        }
        new_index = (new_index + k) % n;
    }
    return energy;
}