#include <stdio.h>
typedef long long ll;
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    ll arr[n];
    for(int i=0;i<n;i++)
        scanf("%lld",&arr[i]);
    int bits[60];
    for(int i=0;i<60;i++)
        bits[i] = 0;
    int max = 0;
    for(int i=0;i<n;i++){
        int cur = 0;
        for(int j=0;j<60;j++){
            if(i>=k && (arr[i-k] & (1LL << j)))
                bits[j]--;
            if(arr[i] & (1LL << j))
                bits[j]++;
            cur += bits[j] > 0;
        }
        if(max < cur)
            max = cur;
    }
    printf("%d",max);
    return 0;
}