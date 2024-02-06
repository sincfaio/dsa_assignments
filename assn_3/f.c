#include <stdio.h>

int main(){
    int n,k,x;
    scanf("%d %d %d",&n,&k,&x);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int sum = 0,count = 0;
    for(int i=0;i<k;i++){
        sum += a[i];
    }
    for(int i=0;i<=n-k;i++){
        if((sum/k) >= x)
            count++;
        sum -= a[i];
        sum += a[i+k];
    }
    printf("%d",count);
    return 0;
}