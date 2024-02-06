#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    char a[n + 1];
    scanf("%s",a);
    int count = 1;
    for(int i = 0;i < n;i++){
        int l = i - 1,r = i;
        while(l >= 0 && r < n && a[l] == a[r]){
            if(r - l + 1 > count)
                count = r - l + 1;
            l--;
            r++;
        }
        l = i - 1;
        r = i + 1;
        while(l >= 0 && r < n && a[l] == a[r]){
            if(r - l + 1 > count)
                count = r - l + 1;
            l--;
            r++;
        }
    }
    printf("%d",count);
}