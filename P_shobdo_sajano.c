#include<stdio.h>
#include<string.h>

#define MAX_SIZE 10000
int main()
{
    int T,N,i,j,*temp;
    char *name[20];
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        //memory allocation
        for(i=0;i<20;i++){
            name[i]=(char*)malloc(MAX_SIZE*sizeof(char));
        }
        temp=(char*)malloc(MAX_SIZE*sizeof(char));
        //input string
        for(i=0;i<N;i++){
            scanf("%s",name[i]);
        }
         printf("\n");
        for(i=0;i<N;i++){
            for(j=i;j<N;j++){
                if(strcmp(name[i],name[j])>0){
                    strcpy(temp,name[i]);
                    strcpy(name[i],name[j]);
                    strcpy(name[j],temp);
                }
            }
            printf("%s\n",name[i]);
        }
        //delocate memory
        for(i=0;i<20;i++){
            free(name[i]);
        }
        free(temp);
    }
    return 0;
}
