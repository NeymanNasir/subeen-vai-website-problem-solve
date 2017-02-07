/*#include<stdio.h>
int main()
{
    int T,ara1[101],ara2[101],ara[202],i,j,n1,n2,temp;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n1);
        for(i=0;i<n1;i++){
            scanf("%d",&ara1[i]);
        }
        scanf("%d",&n2);
        for(i=0;i<n2;i++){
            scanf("%d",&ara2[i]);
        }

        for(i=0,j=0;i<n1;i++,j++){
            ara[j]=ara1[i];
        }
        for(i=0,j=n1;j<n1+n2;i++,j++){
            ara[j]=ara2[i];
        }

        for(i=1;i<n1+n2;i++){
            for(j=0;j<(n1+n2)-1;j++){
                if(ara[j]>ara[j+1]){
                    temp=ara[j];
                    ara[j]=ara[j+1];
                    ara[j+1]=temp;
                }
            }
        }

        for(i=0;i<n1+n2;i++){
            printf("%d ",ara[i]);
        }
        printf("\n");
    }
    return 0;
}*/
#include<stdio.h>
int main()
{
    int T,ara1[101],ara2[101],i,j,k,n,n1,n2,temp,sort[202];
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n1);
        for(i=0;i<n1;i++){
            scanf("%d",&ara1[i]);
        }
        scanf("%d",&n2);
        for(i=0;i<n2;i++){
            scanf("%d",&ara2[i]);
        }

        i=0,j=0,k=0,n=n1+n2;
        while(k<n){
            if(ara1[i]<ara2[j]){
                sort[k]=ara1[i];
                k++;
                i++;
            }
            else{
                sort[k]=ara2[j];
                k++;
                j++;
            }
        }
        n=k;
        printf("%d",sort[0]);
        for(i=1;i<n;i++){
            printf(" %d",sort[i]);
        }
        printf("\n");
    }
    return 0;
}

