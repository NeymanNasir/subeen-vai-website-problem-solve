#include<stdio.h>

int find_GCD(int a,int b)
{
    int gcd,t;
    if(a==0)gcd=b;
    else if(b==0)gcd=a;
    else{
        while(b!=0){
            t=b;
            b=a%b;
            a=t;
        }
        gcd=a;
    }
    return gcd;
}
int main()
{
    int T,a,b,GCD,LCM;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d",&a,&b);
        GCD=find_GCD(a,b);
        LCM=(a*b)/GCD;
        printf("LCM = %d\n",LCM);
    }
    return 0;
}
