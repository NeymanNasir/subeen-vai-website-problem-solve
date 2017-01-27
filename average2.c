#include<stdio.h>
int main()
{
    int n,i,num,ara[10000];
    double average,sum;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&num);
        for(i=0,sum=0.0;i<num;i++){
            scanf("%d",&ara[i]);
            sum+=ara[i];
        }
        average=sum/num;
        printf("%.2lf\n",average);
    }
    return 0;
}
