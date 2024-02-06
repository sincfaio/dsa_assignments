#include <stdio.h>
long num = (1e9 + 7);

unsigned long long power(long a,long b){
    if(b == 0)
        return 1;
    unsigned long long res = power(a,b/2) % num;
    if(b % 2 == 1)
        return (((res * res) % num) * a) % num;
    else{
        return (res * res) % num;
    }
}

int main(){
    int n;
    scanf("%d",&n);
    long a[n],b[n];
    for(int i=0;i<n;i++){
        scanf("%ld",&a[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%ld",&b[i]);
    }
    unsigned long long prod = 1;
    for(int i=0;i<n;i++){
        prod = (prod * power(a[i],b[i])) % num;
    }
    printf("%llu",prod);
    return 0;
}