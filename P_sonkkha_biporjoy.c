#include<stdio.h>
int main()
{
    int T,N,i,rev;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        rev=0;
        while(N!=0){
            rev=rev*10;
            rev=rev+N%10;
            N=N/10;
        }
        printf("%d\n",rev);
    }
    return 0;
}
//another code.....
/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int T,N,i,len;
    char str[1000];
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        itoa(N,str,10);
        len=strlen(str);
        for(i=len-1;i>=0;i--){
            printf("%c",str[i]);
        }
        printf("\n");
    }
    return 0;
}*/
