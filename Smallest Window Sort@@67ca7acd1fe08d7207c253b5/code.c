int findUnsortedSubarray(int arr[] , int n){
    int temp[20];
    for(int i = 0; i<n; i++){
        temp[i] = arr[i];
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
    int num2 = 0;
    int num1 = 0;
    for(int i = 0; i<n; i++){
        if(temp[i] != arr[i]){
            num1 = i;
            break;
        }
    }
    for(int i = n-1; i>=0; i--){
        if(temp[i] != arr[i]){
            num2 = i;
            break;
        }
    }
    int cout;
    if(num1 == 0 && num2 == 0){
        cout = 0;
    }
    else{
        cout = num2 - num1 + 1;
    }
    return cout;
}