#include <stdio.h>
//maximum subarray problem,kadane algo
int revmax(int n,int arr[]){
    int curr_sum = 0,max_sum = 0;
    for(int i=0;i<n;i++){
        curr_sum += arr[i];
        if(curr_sum > max_sum)
            max_sum = curr_sum;
        if(curr_sum < 0)
            curr_sum = 0;
    }
    return max_sum;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n],temp;
    for(int i=0;i<n;i++){
        scanf("%d",&temp);
        arr[i] = temp;
    }
    printf("%d",revmax(n,arr));
    return 0;
}