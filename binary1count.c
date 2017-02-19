#include<stdio.h>
#include<string.h>
int main()
{
    int n,count,len,i,j;
    char str[100];
    scanf("%d",&n);
    i=0;
    while(n>0){
        str[i]=n%2+'0';//assign integer to character in a string
        n=n/2;
        i++;
    }
    len=strlen(str);
    for(j=len-1,count=0;j>=0;j--){
        printf("%c",str[j]);//print decimal to binary num
        if(str[j]=='1'){
            count++;
        }
    }
    printf("\n%d\n",count);
    return 0;
}
