/*#include<stdio.h>
#include<string.h>
int main()
{
    int T,i,j,len;
    char str[1000];
    char reverse[1000];
    scanf("%d",&T);
    while(T--){
        scanf("%s",str);
        len=strlen(str);
        for(i=0,j=len-1;i<len;i++,j--){
            reverse[i]=str[j];
        }
        reverse[i]='\0';
        if(strcmp(str,reverse)==0){
            printf("Yes! It is palindrome!\n");
        }
        else{
            printf("Sorry! It is not palindrome!\n");
        }
    }
    return 0;
}
another efficient code*/
#include<stdio.h>
#include<string.h>
int main()
{
    int T,i,j,len,P;
    char str[1000];
    scanf("%d",&T);
    while(T--){
        scanf("%s",str);
        len=strlen(str);
        for(i=0,j=len-1,P=0;i<len/2;i++,j--){
            if(str[i]==str[j]){
                P++;
            }
        }
        if(P==(len/2)){
            printf("Yes! It is palindrome!\n");
        }
        else{
            printf("Sorry! It is not palindrome!\n");
        }
    }
    return 0;
}
