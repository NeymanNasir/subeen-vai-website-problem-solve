#include<stdio.h>
int main()
{
    int T,N,MSD,LSD,sum;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        LSD=N%10;
        while(N>0){
            MSD=N%10;
            N=N/10;
        }
        sum=LSD+MSD;
        printf("Sum = %d\n",sum);
    }
    return 0;
}
