#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    char str[51];
    scanf("%d",&n);
    while(n--){
        scanf("%s",str);
        for(i=0;str[i]!='\0';i++){
            if(str[i]=='L'){
                str[i]=str[i-1];
            }
            else if(str[i]=='R'){
                str[i]=str[i+1];
            }
        }
        printf("%s\n",str);
    }
    return 0;
}
