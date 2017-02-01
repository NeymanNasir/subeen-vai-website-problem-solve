#include<stdio.h>
int main()
{
    int T,i,len;
    char str[100];
    scanf("%d",&T);
    while(T--){
        scanf(" %[^\n]",str);
        len=strlen(str);
        for(i=0;i<len;i++){
            if(str[i]>='A'&&str[i]<='Z'){
                str[i]=str[i]-64;
            }
            printf("%d",str[i]);
        }
        printf("\n");
    }
    return 0;
}
