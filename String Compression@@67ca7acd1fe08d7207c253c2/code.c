#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* compressString(char str[], char compressed[]) {
    int l = strlen(str);
    int count = 1;
    int k = 0;
    for(int i = 1; i<=l; i++){
        if(str[i]==str[i-1]){
            count++;
        }
        else{
            if(count == 1){
                compressed[k] = str[i-1];
                k++;
                count = 1;
            }
            else{
                compressed[k] = str[i-1];
                k++;
                char countStr[10];
                sprintf(countStr, "%d", count);
                for (int j = 0; countStr[j] != '\0'; j++) {
                    compressed[k++] = countStr[j];
                }
                count = 1;
            }
        }
    }
    compressed[k] = '\0';\
    int comp_l = strlen(compressed);\
    if(l == comp_l){
        for(int i = 1;i<=l;i++){
            if(compressed[i]=='2'){
                compressed[i]=compressed[i-1];
            }
        }
    }
    return compressed;
}
