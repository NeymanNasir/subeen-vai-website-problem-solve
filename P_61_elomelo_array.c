#include<stdio.h>
int main()
{
    int T,i,j,temp,N,y,no,Y,No;
    int ara[100],ara2[100],ara3[100];
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        for(i=0;i<N;i++){
            scanf("%d",&ara[i]);
            ara2[i]=ara[i];
            ara3[i]=ara[i];
        }

        for(i=1;i<N;i++){
            for(j=0;j<N-1;j++){
                if(ara2[j]>ara2[j+1]){
                    temp=ara2[j];
                    ara2[j]=ara2[j+1];
                    ara2[j+1]=temp;
                }
                if(ara3[j]<ara3[j+1]){
                    temp=ara3[j];
                    ara3[j]=ara3[j+1];
                    ara3[j+1]=temp;
                }
            }
        }

        for(i=0,y=0,no=0,Y=0,No=0;i<N;i++){
            if(ara[i]==ara2[i]){
                y++;
            }
            else{
                no++;
            }
            if(ara[i]==ara3[i]){
                Y++;
            }
            else{
                No++;
            }
        }

        if(N==y||N==Y){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}

//another process
/*#include<stdio.h>
int main()
{
    int T,i,N,sorted;
    int ara[100];
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        for(i=0;i<N;i++){
            scanf("%d",&ara[i]);
        }
        
        sorted=1;
        for(i=1;i<N;i++){
            if(ara[i]<ara[i-1]){
                sorted=0;
                break;
            }
        }
        
        if(sorted==1){
            printf("YES\n");
        }
        else{
            sorted=1;
            for(i=0;i<N-1;i++){
                if(ara[i]>ara[i+1]){
                    sorted=1;
                }
                else{
                    sorted=0;
                    break;
                }
            }
            if(sorted==1){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
    }
    return 0;
}*/
