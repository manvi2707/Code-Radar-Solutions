#include<stdio.h>
int maxGadgetSpend(int keyboards[] , int n , int headsets[] , int m , int budget){
    int max_price = -1;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(keyboards[i]+headsets[j]<=budget && keyboards[i]+headsets[j]>max_price){
                max_price = keyboards[i]+headsets[j];
            }
        }
    }
    return max_price;
}