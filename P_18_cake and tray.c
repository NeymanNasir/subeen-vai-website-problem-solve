#include<stdio.h>
int main()
{
    int radius,length,weidth,n,diameter;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d %d",&radius,&length,&weidth);
        diameter=2*radius;
        if((diameter<=length)&&(diameter<=weidth)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
