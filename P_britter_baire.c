#include<stdio.h>
#include<math.h>
int main()
{
    int T,radius,x1,y1,x2,y2,sum,root;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d",&x1,&y1);
        scanf("%d",&radius);
        scanf("%d %d",&x2,&y2);
        sum=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
        root=sqrt(sum);
        if(root>radius){
            printf("The point is not inside the circle\n");
        }
        else{
            printf("The point is inside the circle\n");
        }
    }
    return 0;
}
