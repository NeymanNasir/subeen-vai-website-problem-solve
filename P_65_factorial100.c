#include<stdio.h>
int main()
{
    int T,i,N,five,two,t,f,count;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        for(i=N,five=0;i>=1;i--){
            if(i%5==0){
                f=i;
                while(f%5==0){
                five++;
                f=f/5;
                }
            }
            if(i%2==0){
                t=i;
                while(t%2==0){
                two++;
                t=t/2;
                }
            }
        }
        if(two==0||five==0){
            count=0;
        }
        else if(two>=five){
            count=five;
        }
        else{
            count=two;
        }

        printf("%d\n",count);
    }
    return 0;
}
