#include<stdio.h>
#include<string.h>

void print_reverse(char str[])
{
    int i,len;
    len=strlen(str);
    for(i=len-1;i>=0;i--){
        printf("%c",str[i]);
    }
    printf(" ");
}
int main()
{
    int T,i,j,len;
    char str[1001],word[1001];
    scanf("%d",&T);
    while(T--){
        scanf(" %[^\n]",str);
        len=strlen(str);
        for(i=0,j=0;i<len;i++){
            if(str[i]!=' '){
                word[j]=str[i];
                j++;
            }
            else if(j>0){
                word[j]='\0';
                print_reverse(word);
                j=0;
            }
        }
        if(j>0){
                word[j]='\0';
                print_reverse(word);
            }
            printf("\n");
    }
    return 0;
}
