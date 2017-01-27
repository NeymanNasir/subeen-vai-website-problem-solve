#include<stdio.h>
#include<string.h>
int main()
{
    int len,n;
    char str[101],last_char;
    scanf("%d",&n);
    while(n--){
        scanf("%s",str);
        len=strlen(str);
        last_char=str[len-1];
        if(last_char%2==0){
           printf("even\n");
           }
           else{
            printf("odd\n");
           }
        }
        return 0;
    }
