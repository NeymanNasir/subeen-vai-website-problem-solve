#include<stdio.h>
int main()
{
    int T,A,B,C,i,j;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d %d",&A,&B,&C);
        while(A%C!=0){
            A+=1;
            if(A%C==0){
                break;
            }
        }
        for(i=A;i<=B;i+=C){
                printf("%d\n",i);
        }
    }
    return 0;
}
