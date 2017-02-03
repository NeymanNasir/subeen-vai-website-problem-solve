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
    int T,A,B,C,i,j,GCD,LCM;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d %d",&A,&B,&C);
        GCD=find_GCD(A,B);
        LCM=(A*B)/GCD;
        for(i=LCM;i<=C;i+=LCM){
                printf("%d\n",i);
        }
    }
    return 0;
}
