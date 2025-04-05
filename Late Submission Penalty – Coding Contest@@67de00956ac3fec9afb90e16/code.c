#include<stdio.h>
int calculatePenalty(int subDay , int subMonth , int subYear , int dueDay , int dueMonth , int dueYear){
    int penalty;
    if(subDay > 30 && (subMonth == 4 || subMonth == 6 || subMonth == 9 || subMonth == 11)){
        subDay -= 30;
        subMonth += 1;
    }
    else if(subDay > 31 && (subMonth == 1 || subMonth == 3 || subMonth == 5 || subMonth == 7|| subMonth == 8|| subMonth == 10|| subMonth == 12)){
        subDay -= 31;
        subMonth += 1;
    }
    if(dueDay > 30 && (dueMonth == 4 || dueMonth == 6 || dueMonth == 9 || dueMonth == 11)){
        dueDay -= 30;
        dueMonth += 1;
    }
    if(dueDay > 31 && (dueMonth == 1 || dueMonth == 3 || dueMonth == 5 || dueMonth == 7|| dueMonth == 8|| dueMonth == 10|| dueMonth == 12)){
        dueDay -= 31;
        dueMonth += 1;
    }
    if(subMonth > 12){
        subMonth -= 12;
        subYear += 1;
    }
    if(dueMonth > 12){
        dueMonth -= 12;
        dueYear += 1;
    }
    if(subYear!=dueYear && subYear>dueYear){
        penalty = (subYear-dueYear)*5000;
    }
    else{
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
    return penalty;
}