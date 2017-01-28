#include<stdio.h>
long long find_factorial(int N)
{
    int i;
    long long f;
    for(i=1,f=1;i<=N;i++){
        f*=i;
    }
    return f;
}
int main()
{
    int T,N;
    long long factorial;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        factorial=find_factorial(N);
        printf("%lld\n",factorial);
    }
    return 0;
}
