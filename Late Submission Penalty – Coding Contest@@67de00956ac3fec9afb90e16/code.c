#include<stdio.h>
int calculatePenalty(int subDay , int subMonth , int subYear , int dueDay , int dueMonth , int dueYear){
    int penalty;
    if(subYear != dueYear){
        penalty = (subYear-dueYear)*5000;
    }
    else{
        if(subMonth != dueMonth){
            penalty = (subMonth-dueMonth)*200;
        }
        else{
            if(subDay!=dueDay){
                penalty = (subDay-dueDay)*10;
            }
            else{
                penalty = 0;
            }
        }
    }
    return penalty;
}