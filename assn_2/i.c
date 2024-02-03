#include <stdio.h>

int max_profit(int n,int a[]){
    int profit = 0;
    for(int i=0;i<n-1;i++){
        if(a[i] < a[i+1])
            profit += (a[i+1] - a[i]);
    }
    return profit;
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