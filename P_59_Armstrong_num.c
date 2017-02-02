#include<stdio.h>
int main()
{
    int T,N,num,n,sum;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        n=N;
        sum=0;
        while(N>0){
            num=N%10;
            sum+=(num*num*num);
            N=N/10;
        }
        if(n==sum){
            printf("%d is an armstrong number!\n",n);
        }
        else{
            printf("%d is not an armstrong number!\n",n);
        }
    }
    return 0;
}
