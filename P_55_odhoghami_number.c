#include<stdio.h>
int main()
{
    int i,j;
    for(i=1000;i>0;){
        for(j=0;j<5;j++){
            printf("%d\t",i);
            i--;
        }
        printf("\n");
    }
    return 0;
}

/**********************
another code..
    
#include<stdio.h>
int main()
{
    int i,j;
    printf("1000\t");
    for(i=999;i>0;i--){
        if(i%5==0){
            printf("\n");
            }
        printf("%d\t",i);
    }
    return 0;
}

5 er sob gunitok 5 ghor por por e ase*/
