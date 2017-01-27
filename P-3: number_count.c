#include<stdio.h>
#include<string.h>
int count_numbers(char str[]);

int main()
{
    int n,count;
    char str[10000];
    scanf("%d",&n);
    while(n--){
        scanf(" %[^\n]",str);
        count=count_numbers(str);
        printf("%d\n",count);
    }
    return 0;
}

int count_numbers(char str[])
{
    int i,len,count;
    len=strlen(str);
    count=0;
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
    return (count+1);
}
