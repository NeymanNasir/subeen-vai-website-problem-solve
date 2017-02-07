#include<stdio.h>
int main()
{
    int T,N,i,j;
    int odd[21],even[21];
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        if(N==1){
            printf("1\n");
            printf("1 1\n");
        }
        else{
        even[0]=1;
        even[1]=1;
        printf("1\n");
        printf("%d %d\n",even[0],even[1]);
        for(i=3;i<=N+1;i++){
            if(i%2==0){
                even[0]=1;
                printf("%d ",even[0]);
                for(j=1;j<i-1;j++){
                    even[j]=odd[j-1]+odd[j];
                    printf("%d ",even[j]);
                }
                even[j]=1;
                printf("%d\n",even[j]);
            }
            else{
                odd[0]=1;
                printf("%d ",odd[0]);
                for(j=1;j<i-1;j++){
                    odd[j]=even[j-1]+even[j];
                    printf("%d ",odd[j]);
                }
                odd[j]=1;
                printf("%d\n",odd[j]);
            }
        }
    }
    }
    return 0;
}
