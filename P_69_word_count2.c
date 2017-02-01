#include<stdio.h>
#include<string.h>
int main()
{
    int T,i,count,len;
    char str[10005],*word;
    scanf("%d",&T);
    while(T--){
        scanf(" %[^\n]",str);
        word=strtok(str,",!;?. ");
        count=0;
        while(word!=NULL){
            len=strlen(word);
            if(len>0){
                count++;
            }
        word=strtok(NULL, ",!;?. ");
        }
        printf("Count = %d\n",count);
    }
    return 0;
}
