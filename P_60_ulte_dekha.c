#include<stdio.h>
#include<string.h>
int main()
{
    int T,i,j,len;
    char str[1005];
    scanf("%d",&T);
    while(T--){
        scanf(" %[^\n]",str);
        len=strlen(str);
        for(i=len-1;i>=0;i--){
            printf("%c",str[i]);
        }
        printf("\n");
    }
    return 0;
}
