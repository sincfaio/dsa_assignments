#include <stdio.h>

int binarysearch(int arr[],int low,int high,int x){
    if(low <= high){
        int mid = low + (high-low) / 2;
        if(arr[mid] == x){
            return mid;
        }

        if(arr[mid] > x){
            return binarysearch(arr,low,mid-1,x);   
        }
        return binarysearch(arr,mid + 1,high,x);
    }
    return -1;
}

int main(){
    int n,h;
    scanf("%d",&n);
    scanf("%d",&h);
    int arr[n];
    int k;
    for(int i=0;i<n;i++){
        scanf("%d",&k);
        arr[i] = k;
    }
    printf("%d",binarysearch(arr,0,n-1,h) + 1);
    return 0;
}