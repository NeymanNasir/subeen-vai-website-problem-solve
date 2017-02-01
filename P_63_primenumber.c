#include<stdio.h>
#include<math.h>

#define size 1000000
char ara[size];

void seive()
{
    int i,j,root;

    for(i=2;i<size;i++) ara[i]=1;
    root=sqrt(size);

    for(i=2;i<=root;i++){
        if(ara[i]==1){
            for(j=i;i*j<=size;j++){
                ara[i*j]=0;
            }
        }
    }
}
int main()
{
    int t,a,b,count,i;
    seive();
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&a,&b);
        count=0;
        for(i=a;i<=b;i++){
            if(ara[i]==1){
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
