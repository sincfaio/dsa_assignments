#include <stdio.h>

long long sq_root(long p){
    long long big_no = 1e12;
    long long n = p * big_no;
    long long low = 1,high = n-1;
    long long ans;
    while(low <= high){
        unsigned long mid = (low + high) / 2;
        if(mid*mid == n)
            return mid;
        if((mid*mid) < n){
            low = mid + 1;
            ans = mid;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;
}

int main(){
    long n;
    scanf("%ld",&n);
    printf("%f",(sq_root(n) / 1e6)); 
    return 0;
}