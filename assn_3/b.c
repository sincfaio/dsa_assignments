#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    char str[n+1];
    scanf(" %[^\n]s",str);
    int visited[26];
    for(int i = 0;i < 26;i++){
        visited[i] = 0;
    }
    int l = 0,r = 0,max = 0;
    while(r < n){
        while(r < n){
            if(visited[str[r] - 'a'] == 1){
                while(visited[str[r] - 'a'] == 1){
                    visited[str[l] - 'a'] = 0;
                    l++;
                }
            }
            visited[str[r] - 'a'] = 1;
            if(max < (r - l + 1))
                max = r - l + 1;
            r++;
        }
    }
    printf("%d",max);
    return 0;
}