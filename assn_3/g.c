#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int l = 0,r = n-1,wl = a[0],wr = a[n-1],w = 0;
    while(l < r){
        if(wl == wr && wl > w){
            w = wl;
            l++;
            wl += a[l];
        }
        if(wl > wr){
            r--;
            wr += a[r];
            continue;
        }
        if(wl < wr){
            l++;
            wl += a[l];
            continue;
        }
    }
    printf("%d",w);
    return 0;
}