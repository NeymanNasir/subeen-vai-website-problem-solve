#include<stdio.h>
int main()
{
    int T,a,b,c,d,e,average;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
        average=(a+b+c+d+e)/5;
        printf("%d\n",average);
    }
    return 0;
}

another method

#include<stdio.h>
int main()
{
    int T,ara[5],i,sum,average;
    scanf("%d",&T);
    while(T--){
        for(i=0,sum=0;i<5;i++){
            scanf("%d",&ara[i]);
            sum+=ara[i];
        }
        average=sum/5;
        printf("%d\n",average);
    }
    return 0;
}
