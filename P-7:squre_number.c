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

//by ceil() and floor() function

/*#include<stdio.h>
int main()
{
    int T,N;
    double sq_root,difference;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        sq_root=sqrt(N);
        difference=ceil(sq_root)-floor(sq_root);
        if(difference<0.000001){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
*/
