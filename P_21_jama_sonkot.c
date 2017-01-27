#include<stdio.h>
int main()
{
    int T,n;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        if(n%2==0){
            printf("red\n");
        }
        else{
            printf("blue\n");
        }
    }
    return 0;
}
