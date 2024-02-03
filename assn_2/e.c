#include <stdio.h>
#include <stdbool.h>

bool search(int n,int arr[][n],int k){
    int low = 0,high = n*n - 1;
    while(low <= high){
        int mid = (low + high) / 2;
        int r = mid / n;
        int c = mid % n;
        int val = arr[r][c];
        if(val == k)
            return true;
        if(val < k)
            low = mid + 1;
        if(val > k)
            high = mid - 1;
    }
    return false;
}
int main(){
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int arr[n][n];
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&temp);
            arr[i][j] = temp;
        }
    }
    if(search(n,arr,k))
        printf("%s","YES");
    else
        printf("%s","NO");
    return 0;
}