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

/*another code by strol() function
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char line[1000000];
    char *p,*e;
    long input;
    int count,N,T;
    p=line;
    scanf("%d",&T);
    while(T--){
            scanf(" %[^\n]",line);
            count=0;
        for(p=line; ;p=e){
            input=strtol(p,&e,10);
            if(p==e){
            break;
        }
        count++;
    }
    printf("%d\n",count);
    }
    return 0;
}
*/
