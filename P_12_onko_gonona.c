#include<stdio.h>
int main()
{
    int T,N,v,count;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        count=0;
        while(N>0){
            v=N%10;
            count++;
            N=N/10;
        }
        if(count==0){
            count=1;
        }
        printf("%d\n",count);
    }
}
