#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    char str[n+1];
    scanf(" %[^\n]s",str);
    int pos[n],count = 0;
    for(int i = 0;i < n;i++){
        if(str[i] == ' '){
            pos[count] = i;
            count++;
        }
    }
    int start = 0;
    for(int i = 0;i < count;i++){
        for(int j = pos[i] - 1;j >= start;j--){
            printf("%c",str[j]);
        }
        start = pos[i] + 1;
        printf(" ");
    }
    for(int i = n - 1;i >= start;i--){
        printf("%c",str[i]);
    }
    return 0;
}