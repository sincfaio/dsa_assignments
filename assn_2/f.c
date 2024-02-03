#include <stdio.h>

void printRev(int n,int arr[],int l,int r){
    int sum = 0;
    for(int i=l;i<=r;i++){
        sum += arr[i];
    }
    printf("%d\n",sum);
}

int main(){
    int n,q;
    scanf("%d",&n);
    scanf("%d",&q);
    int arr[n],temp;
    for(int i=0;i<n;i++){
        scanf("%d",&temp);
        arr[i] = temp;
    }
    int l,r;
    int query_l[q],query_r[q];
    for(int i=0;i<q;i++){
        scanf("%d",&l);
        scanf("%d",&r);
        query_l[i] = l;
        query_r[i] = r;
    }
    for(int i=0;i<q;i++){
        printRev(n,arr,query_l[i]-1,query_r[i]-1);
    }
    return 0;
}