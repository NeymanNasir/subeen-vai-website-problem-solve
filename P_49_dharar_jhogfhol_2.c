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
    int T,n,i;
    double sum;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        for(i=1,sum=0.0;i<=n;i++){
            sum+=(double)i/find_factorial(i);
        }
        printf("%0.4lf\n",sum);
    }
    return 0;
}
