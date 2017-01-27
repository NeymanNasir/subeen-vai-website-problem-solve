#include<stdio.h>
int main()
{
    int T,x,n,ara[10000],i,j;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d %d",&x,&n);
        printf("Case %d: ",i);
        for(j=1;x*j<=n;j++){
            ara[j]=x*j;
            printf("%d ",ara[j]);
        }
        printf("\n");
    }
    return 0;
}
