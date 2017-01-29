#include<stdio.h>
int main()
{
    int n,i,j,num;
    scanf("%d",&n);
    for(j=1;j<=n;j++){
        scanf("%d",&num);
        printf("Case %d: ",j);
        for(i=1;i<=num;i++){
            if(num%i==0){
                printf("%d ",i);
            }
        }
        printf("\n");
    }
    return 0;
}

//another code
/*#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,num,root;
    scanf("%d",&n);
    for(j=1;j<=n;j++){
        scanf("%d",&num);
        printf("Case %d: ",j);
        root=sqrt(num);
        for(i=1;i<root;i++){
            if(num%i==0){
                printf("%d ",i);
            }
        }
        for(i=root;i<=num;i++){
            if(num%i==0){
                printf("%d ",i);
            }
        }
        printf("\n");
    }
    return 0;
}
ekti number er jotogula vajok ba gunoniok thake sadharonoto tar ordhek square root er ceye choto
ar baki ordhek tar square root er ceye boro.*/
