#include<stdio.h>
int main()
{
    int T,n,i,j;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            for(j=0;j<(n-i);j++){
                printf(" ");
            }
            for(j=0;j<=i;j++){
                printf("*");
            }
            for(j=0;j<i;j++){
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
