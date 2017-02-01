#include<stdio.h>
int main()
{
    int T,i,j,len;
    char str[1001];
    scanf("%d",&T);
    while(T--){
        scanf(" %[^\n]",str);
        len=strlen(str);
        for(i=0;str[i]!='\0';i++){
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
                printf("%c",str[i]);
            }
        }
        printf("\n");
        for(i=0;str[i]!='\0';i++){
            if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!=' '){
                printf("%c",str[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
