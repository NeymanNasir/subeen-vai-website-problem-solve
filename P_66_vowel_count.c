#include<stdio.h>

int vowel_count(char str[])
{
    int i,len,count=0;
    len=strlen(str);
    for(i=0;i<len;i++){
        if(str[i]=='A'||str[i]=='a'||str[i]=='e'||str[i]=='e'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='U'||str[i]=='u'){
            count++;
        }
    }
    return count;
}
int main()
{
    int T,count;
    char str[1002];
    scanf("%d",&T);
    while(T--){
        scanf(" %[^\n]",str);
        count=vowel_count(str);
        printf("Number of vowels = %d\n",count);
    }
    return 0;
}
