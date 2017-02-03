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
//another efficient code
/*#include<stdio.h>
int main()
{
    int T,X,N,i;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d",&X,&N);
        if(X>N){
            printf("Invalid\n");
        }
        else{
            for(i=X;i<=N;i+=X){
                printf("%d\n",i);
            }
        }
    }
    return 0;
}
*/
