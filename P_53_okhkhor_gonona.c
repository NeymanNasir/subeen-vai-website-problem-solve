#include<stdio.h>
#include<string.h>
int main()
{
    int T,i,len;
    int upper[26];
    int lower[26];
    char str[1000];
    scanf("%d",&T);
    while(T--){
        scanf(" %[^\n]",str);
        len=strlen(str);
        for(i=0;i<26;i++){
            upper[i]=0;
        }
        for(i=0;i<len;i++){
            if(str[i]>='A'&&str[i]<='Z'){
                upper[str[i]-'A']++;
            }
        }

        for(i=0;i<26;i++){
            lower[i]=0;
        }
        for(i=0;i<len;i++){
            if(str[i]>='a'&&str[i]<='z'){
                lower[str[i]-'a']++;
            }
        }
        for(i=0;i<26;i++){
            if(upper[i]!=0){
                printf("%c = %d\n",'A'+i,upper[i]);
            }
        }
        for(i=0;i<26;i++){
            if(lower[i]!=0){
                printf("%c = %d\n",'a'+i,lower[i]);
            }
        }
    }
    return 0;
}
