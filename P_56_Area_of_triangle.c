#include<stdio.h>
int main()
{
    int T,a,b,c;
    double area,s;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d %d",&a,&b,&c);
        s=(a+b+c)/2.0;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Area = %.3lf\n",area);
    }
    return 0;
}
