#include<stdio.h>
int main()
{
    int n,i,j,num;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&num);
        for(i=0;i<num;i++){
            for(j=0;j<num;j++){
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
