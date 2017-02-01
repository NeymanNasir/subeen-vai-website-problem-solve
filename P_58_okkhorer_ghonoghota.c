#include<stdio.h>
#include<string.h>
int main()
{
    int T,i,count,len;
    char str[10001],ch[2],S[10001],C[2];
    scanf("%d",&T);
    while(T--){
        scanf(" %[^\n]",str);
        scanf("%s",ch);
        len=strlen(str);
        strcpy(S,str);
        strcpy(C,ch);
        for(i=0;i<len;i++){
            if(str[i]>='A'&&str[i]<='Z'){
                str[i]='a'+(str[i]-'A');
            }
        }
        for(i=0;i<2;i++){
            if(ch[i]>='A'&&ch[i]<='Z'){
                ch[i]='a'+(ch[i]-'A');
            }
        }
        for(i=0,count=0;i<len;i++){
            if(ch[0]==str[i]){
                count++;
            }
        }
        if(count==0){
                printf("'%c' is not present\n",C[0]);
        }
        else{
            printf("Occurrence of '%c' in '%s' = %d\n",C[0],S,count);
        }
    }
    return 0;
}
