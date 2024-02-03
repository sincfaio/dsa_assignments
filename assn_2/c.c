#include <stdio.h>

int searchfor7(int arr[],int n){
    int low = 0,high = n-1;
    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] == 7)
            return mid;
        //left sorted
        if(arr[low] <= arr[mid]){
            if(arr[low] <= 7 && 7 < arr[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        //right sorted
        else{
            if(arr[mid] < 7 && 7 <= arr[high]){
                low = mid + 1;
            }
            else{
                high = mid -1;
            }
        }
    }
    return -1;
}

int main(){
    int n;
    scanf("%d",&n);
    n = n-1;
    int arr[n];
    int k;
    for(int i=0;i<n;i++){
        scanf("%d",&k);
        arr[i] = k;
    }
    printf("%d",searchfor7(arr,n));
    return 0;
}