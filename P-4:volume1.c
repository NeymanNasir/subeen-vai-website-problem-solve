#include<stdio.h>
int main()
{
    int n,length,weidth,height;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d %d",&length,&weidth,&height);
        printf("%d\n",length*weidth*height);
    }
    return 0;
}
