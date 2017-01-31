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

//with bubble sorting....
/*#include<stdio.h>

void bubble_sort(int ara[],int n)
{
    int i,j,k,temp;
    for(i=1;i<n;i++){
        for(j=0;j<n-1;j++){
            if(ara[j]>ara[j+1]){
                temp=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=temp;
            }
        }
    }
    for(k=0;k<n;k++){
            printf("%d ",ara[k]);
        }
}
int main()
{
    int T,i,j,ara[3];
    scanf("%d",&T);
    for(j=1;j<=T;j++){
        for(i=0;i<3;i++){
            scanf("%d",&ara[i]);
        }
        printf("Case %d: ");
        bubble_sort(ara,3);
        printf("\n");
    }
    return 0;
}
*/
