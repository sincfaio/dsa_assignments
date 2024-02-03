#include <stdio.h>

int findpeak(int arr[],int n){
    int low = 0;
    int high = n-1;

    while(low < high){
        int mid = low + (high - low)/2;  
        if(arr[mid] > arr[mid+1]){
            high = mid;
        }else{
            low = mid + 1;
        }
    }
    return low;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int k;
    for(int i=0;i<n;i++){
        scanf("%d",&k);
        arr[i] = k;
    }
    printf("%d",findpeak(arr,n) + 1);
    return 0;
}