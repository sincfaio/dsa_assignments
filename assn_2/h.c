#include <stdio.h>

int max_profit(int n,int a[]){
    int max_diff = a[1] - a[0];
    int min = a[0];
    for(int i=1;i<n;i++){
        if((a[i] - min) > max_diff)
            max_diff = a[i] - min;
        if(a[i] < min)
            min = a[i];
    }
    return max_diff;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n],temp;
    for(int i=0;i<n;i++){
        scanf("%d",&temp);
        arr[i] = temp;
    }
    printf("%d",max_profit(n,arr));
    return 0;
}