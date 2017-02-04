#include<stdio.h>
int main()
{
    int T,i,j,X,K,sum,mul;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d",&X,&K);
        sum=1;
        mul=1;
        for(i=1;i<=K;i++){
            mul*=X;
            sum+=mul;
        }
        printf("%d\n",sum);
    }
}
//another code by formula of gunuttor dhara
//sum=a(r^n-1)/(r-1)
/*#include<stdio.h>
int main()
{
    int T,X,K,i,r,sum;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d",&X,&K);
        if(K==0){
            sum=1;
        }
        else{
            for(i=0,r=1;i<=K;i++){
                r*=X;
            }
            sum=(r-1)/(X-1);
        }
        printf("%d\n",sum);
    }
    return 0;
}*/
