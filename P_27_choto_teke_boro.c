#include<stdio.h>
int main()
{
    int T,ara[3],min[3],i,j,k;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
    for(k=0;k<3;k++){
        scanf("%d",&ara[k]);
        min[k]=ara[k];
        for(j=1;j<=3;j++){
            if(ara[j]<min[k]){
                min[k]=ara[j];
            }
        }
    }
    printf("Case %d: ",i);
    for(j=3;j<0;j--){
        printf("%d ",min[j]);
    }
    }
    return 0;
}
