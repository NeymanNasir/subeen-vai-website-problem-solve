#include<stdio.h>
int main()
{
    int T,n,i,j;
    int ara[100];
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&n);
        for(j=0;j<n;j++){
            scanf("%d",&ara[j]);
        }
        printf("Set %d: ",i);
        for(j=0;j<n;j=j+2){
            printf("%d ",ara[j]);
        }
        printf("\n");
    }
    return 0;
}
