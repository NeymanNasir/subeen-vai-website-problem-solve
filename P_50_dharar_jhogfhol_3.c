#include<stdio.h>
int main()
{
    int T,i,n;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        for(i=n;i>=2;i--){
            printf("2^%d + ",i);
        }
        printf("2 + 1");
        printf("\n");
    }
    return 0;
}
