/*#include<stdio.h>
int main()
{
    int T,n,i,j,ara1[1000],ara2[1000],temp;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        for(i=0;i<n-1;i++){
            scanf("%d",&ara1[i]);
        }
        //given ara1 sorting
        for(i=1;i<n-1;i++){
            for(j=0;j<n-2;j++){
                if(ara1[j]>ara1[j+1]){
                    temp=ara1[j];
                    ara1[j]=ara1[j+1];
                    ara1[j+1]=temp;
                }
            }
        }
        //additional ara2 creating
        for(i=0;i<n;i++){
            ara2[i]=i+1;
        }
        //now we can compare
        for(i=0;i<n;i++){
            if(ara1[i]!=ara2[i]){
                printf("%d\n",ara2[i]);
                break;
            }
        }
    }
    return 0;
}
//another efficient
#include<stdio.h>
int main()
{
    int T,n,i,j,ara1[1000],ara2[1000],temp,found;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        for(i=0;i<n-1;i++){
            scanf("%d",&ara1[i]);
        }

        for(i=1;i<=n;i++){
            found=0;
            for(j=0;j<n-1;j++){
                if(i==ara1[j]){
                    found=1;
                    break;
                }
            }
            if(found==0){
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}
//another efficient
#include<stdio.h>
int main()
{
    int ara[100001];
    int T,i,N,num,missing;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        for(i=1;i<=N;i++)ara[i]=0;

        for(i=0;i<N-1;i++){
            scanf("%d",&num);
            ara[num]=1;
        }

        for(i=1;i<=N;i++){
            if(ara[i]==0){
                missing=i;
                break;
            }
        }
        printf("%d\n",missing);
    }
    return 0;
}
*/
#include<stdio.h>
int main()
{
    int ara[100001];
    int T,i,N,sum,ssum,missing;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);

        for(i=0,sum=0;i<N-1;i++){
            scanf("%d",&ara[i]);
            sum+=ara[i];
        }

        ssum=(N*(N+1))/2;

        missing=ssum-sum;
        printf("%d\n",missing);
    }
    return 0;
}
