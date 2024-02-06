#include <stdio.h>
#include <stdbool.h>

bool isprime(long p){
    int i = 2;
    while(i*i <= p){
        if((p % i) == 0 )
            return false;
        i++;
    }
    return true;
}

int main(){
    long n;
    scanf("%ld",&n);
    long a[n];
    for(int i=0;i<n;i++){
        scanf("%ld",&a[i]);
    }
    long long prod = 1;
    int flag = 0;
    long num = (1e9 + 7);  
    for(int i=0;i<n;i++){
        if(!isprime(a[i])){
            prod *= a[i];
            prod = prod % num;
            flag = 1;
        }
    }
    if(!flag){
        prod = -1;
    }
    printf("%lld",prod);
    return 0;
}