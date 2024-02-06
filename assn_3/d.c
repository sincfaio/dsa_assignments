#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    char str[n+1];
    scanf(" %[^\n]s",str);
    int count = 0,vow[n];
    for(int i = 0;i < n;i++){
        if(str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u'){
            vow[count] = i;
            count++;
        }
    }
    int temp = 0;
    for(int i = 0;i < n;i++){
        if(i == vow[temp]){
            printf("%c",str[vow[count - temp - 1]]);
            temp ++;
        }
        else{
            printf("%c",str[i]);
        }
    }
    return 0;
}