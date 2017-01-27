#include<stdio.h>
int main()
{
    int T,M,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&M);
        if(M>=0&&M<=44){
            printf("Case %d: F\n",i);
        }
        else if(M>=45&&M<=49){
            printf("Case %d: D\n",i);
        }
        else if(M>=50&&M<=54){
            printf("Case %d: C\n",i);
        }
        else if(M>=55&&M<=59){
            printf("Case %d: B-\n",i);
        }
        else if(M>=60&&M<=64){
            printf("Case %d: B\n",i);
        }
        else if(M>=65&&M<=69){
            printf("Case %d: B+\n",i);
        }
        else if(M>=70&&M<=74){
            printf("Case %d: A-\n",i);
        }
        else if(M>=75&&M<=79){
            printf("Case %d: A\n",i);
        }
        else if(M>=80&&M<=100){
            printf("Case %d: A+\n",i);
        }
    }
    return 0;
}
