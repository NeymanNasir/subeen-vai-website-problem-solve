#include<stdio.h>

int count_word(char str[])
{
    int i,len,count=0;
    len=strlen(str);
    for(i=0;i<len;){
        if(str[i]==' '){
                while(str[i]==' '){
                    i++;
                }
            count++;
        }
        else{
            i++;
        }
    }
    return count+1;
}
int main()
{
    int T,count;
    char str[10005];
    scanf("%d",&T);
    while(T--){
        scanf(" %[^\n]",str);
        count=count_word(str);
        printf("Count = %d\n",count);
    }
    return 0;
}
