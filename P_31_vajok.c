#include<stdio.h>
int main()
{
    int n,i,j,num;
    scanf("%d",&n);
    for(j=1;j<=n;j++){
        scanf("%d",&num);
        printf("Case %d: ",j);
        for(i=1;i<=num;i++){
            if(num%i==0){
                printf("%d ",i);
            }
        }
        printf("\n");
    }
    return 0;
}
