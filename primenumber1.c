#include<stdio.h>
#include<math.h>

#define size 101
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
    int t,count,i,num[10];
    seive();
    scanf("%d",&t);
    while(t--){
        for(i=0,count=0;i<10;i++){
                scanf("%d",&num[i]);
                if(ara[num[i]]==1){
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
