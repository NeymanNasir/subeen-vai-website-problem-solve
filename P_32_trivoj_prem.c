#include<stdio.h>
int main()
{
    int T,B,H,i;

    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d %d",&B,&H);
        printf("Case %d: %d\n",i,B*H);
    }
    return 0;
}
