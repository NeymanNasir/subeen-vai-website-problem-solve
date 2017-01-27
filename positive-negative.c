#include<stdio.h>
int main()
{
    int n,num,i,positive=0,negative=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num);
        if(num>0){
            positive++;
        }
        else{
            negative++;
        }
    }
    printf("%d %d",positive,negative);

    return 0;
}
