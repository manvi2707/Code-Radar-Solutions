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
    for(int i = 0; i<n; i++){
        if(temp[i] != arr[i]){
            int num1 = i;
        }
    }
    for(int i = n-1; i>=0; i--){
        if(temp[i] != arr[i]){
            int num2 = i;
        }
    }
    cout = num2 - num2 + 1;
    return cout;
}