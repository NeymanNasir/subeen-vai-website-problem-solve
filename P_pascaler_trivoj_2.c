#include<stdio.h>
int main()
{
    int T,N,i,j;
    long long int pascal[52][51];
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        if(N==1){
            printf("1\n");
            printf("1 1\n");
        }
        else{
            pascal[1][0]=1;
            pascal[2][0]=1;
            pascal[2][1]=1;
            printf("1\n");
            printf("1 1\n");

            for(i=3;i<=N+1;i++){
                pascal[i][0]=1;
                printf("%d ",pascal[i][0]);
                for(j=1;j<i-1;j++){
                    pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j];
                    printf("%d ",pascal[i][j]);
                }
                pascal[i][j]=1;
                printf("%d\n",pascal[i][j]);
            }
        }
    }
    return 0;
}
