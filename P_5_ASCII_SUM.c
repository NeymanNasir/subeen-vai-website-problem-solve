#include<stdio.h>
int main()
{
    int T,i,sum;
    char str[4];
    scanf("%d",&T);
    while(T--){
        scanf(" %[^\n]",str);
        for(i=0,sum=0;i<3;i++){
            sum+=str[i];
        }
        printf("%d\n",sum);
    }
    return 0;
}
