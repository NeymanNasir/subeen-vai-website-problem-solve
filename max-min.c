#include<stdio.h>
int main()
{
    int n,i,ara[5],max,min;
    scanf("%d",&n);
    while(n--){
        for(i=0;i<5;i++){
            scanf("%d",&ara[i]);
        }
            max=ara[0];
            min=ara[0];
            for(i=1;i<5;i++){
                if(ara[i]>max){
                    max=ara[i];
                }
                if(ara[i]<min){
                    min=ara[i];
                }
            }
        printf("%d %d\n",max,min);
    }
    return 0;
}
