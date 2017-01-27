#include<stdio.h>
int main()
{
    int T,a,b,c,d,e,average;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
        average=(a+b+c+d+e)/5;
        printf("%d\n",average);
    }
    return 0;
}
