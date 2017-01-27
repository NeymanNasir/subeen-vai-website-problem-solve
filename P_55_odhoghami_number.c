#include<stdio.h>
int main()
{
    int i,j;
    for(i=1000;i>0;){
        for(j=0;j<5;j++){
            printf("%d\t",i);
            i--;
        }
        printf("\n");
    }
    return 0;
}
