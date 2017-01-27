#include<stdio.h>
int main()
{
    int T,D,H,i,j,k;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d %d",&D,&H);
        printf("Case %d:\n",i);
        for(j=0;j<H;j++){
            for(k=0;k<=j;k++){
                printf("%d",D);
            }
            printf("\n");
        }
    }
    return 0;
}
