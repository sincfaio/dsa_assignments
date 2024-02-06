#include <stdio.h>

int main(){
    int n,m;
    scanf("%d",&n);
    int arr1[n];
    scanf("%d",&m);
    int arr2[m];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<m;i++){
        scanf("%d",&arr2[i]);
    }
    int mergedarr[n+m],k=0,i=0,j=0;
    
    while(i<n && j<m){
        if(arr1[i] <= arr2[j]){
            mergedarr[k] = arr1[i];
            i++;
            k++;
        }
        else{
            mergedarr[k] = arr2[j];
            j++;
            k++;
        }
    }

    while(i<n){
        mergedarr[k] = arr1[i];
        i++;
        k++;
    }

    while(j<m){
        mergedarr[k] =arr2[j];
        j++;
        k++;
    }

    for(int i=0;i<n+m;i++){
        printf("%d ",mergedarr[i]);
    }
    return 0;
}