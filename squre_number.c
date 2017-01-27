#include<stdio.h>
#include<math.h>
int main()
{
    int T,N,root;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        root=sqrt(N);
        if(N==(root*root)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
