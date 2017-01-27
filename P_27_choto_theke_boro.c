#include<stdio.h>
int main()
{
    int n,p,q,r,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d %d",&p,&q,&r);
        printf("Case %d:",i);
        if((p<q)&&(p<r)){
            if(q<r){
                printf(" %d %d %d\n",p,q,r);
            }
            else{
                printf(" %d %d %d\n",p,r,q);
            }
        }
        if((q<p)&&(q<r)){
            if(p<r){
                printf("%d %d %d\n",q,p,r);
            }
            else{
                printf("%d %d %d\n",q,r,p);
            }
        }
        if((r<p)&&(r<q)){
            if(p<q){
                printf("%d %d %d\n",r,p,q);
            }
            else{
                printf("%d %d %d\n",r,q,p);
            }
        }
    }
    return 0;
}
