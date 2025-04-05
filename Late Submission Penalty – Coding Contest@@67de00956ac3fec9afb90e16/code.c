#include<stdio.h>
int calculatePenalty(int subDay , int subMonth , int subYear , int dueDay , int dueMonth , int dueYear){
    int penalty;
    if(subYear!=dueYear && subYear>dueYear){
        penalty = 5000;
    }
    else if(subYear == dueYear){
        if(subMonth!=dueMonth && subMonth>dueMonth){
            penalty = (subMonth-dueMonth)*200;
        }
        else{
            if(subDay!= dueDay && subDay>dueDay){
                penalty = (subDay-dueDay)*10;
            }
            else{
                penalty = 0;
            }
        }
    }
    else{
        penalty = 0;
    }
    return penalty;
}