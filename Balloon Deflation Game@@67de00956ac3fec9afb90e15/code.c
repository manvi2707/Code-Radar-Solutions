#include<stdio.h>
void deflateBalloons(int air[] , int n){
    int unique[n];
    int j = 1;
    for(int i = 0; i<n; i++){
        for(int k = 0; k<n; k++){
            if(air[i] < air[k]){
                int temp = air[i];
                air[i] = air[k];
                air[k] = temp;
            }
        }
    } 
    unique[0] = air[0];
    for(int i = 1; i<n; i++){
        if(air[i] != air[i-1]){
            unique[j] = air[i];
            j++;
        }
    }
    for(int i = 0; i<j; i++){
        printf("uni: ");
        printf("%d " , unique[i]);
    }
    int m = 0;
    int num = n;
    printf("%d\n" , n);
    int i = 0;
    for(int m = 0; m<j-1; m++){
        while(i!=n-1){;
            if(air[i] == unique[m]){
                for(int k = i; k<n-1; k++){
                    air[k] = air[k+1];
                }
                num--;
                n = num;
            }
            else{
                i++;
            }
        }
        printf("%d\n" , num);
        i = 0;
    }
}