#include<stdio.h>
#include<string.h>
int main()
{
    int T,i,len;
    char str[105];
    int st[105];
    scanf("%d",&T);
    while(T--){
        scanf(" %[^\n]",str);
        len=strlen(str);
        for(i=0;i<len;i++){
            if(str[i]=='A'||str[i]=='a'){
                st[i]=1;
            }
            else if(str[i]=='B'||str[i]=='b'){
                st[i]=2;
            }
            else if(str[i]=='C'||str[i]=='c'){
                st[i]=3;
            }
            else if(str[i]=='D'||str[i]=='d'){
                st[i]=4;
            }
            else if(str[i]=='E'||str[i]=='e'){
                st[i]=5;
            }
            else if(str[i]=='F'||str[i]=='f'){
                st[i]=6;
            }
            else if(str[i]=='G'||str[i]=='g'){
                st[i]=7;
            }
            else if(str[i]=='H'||str[i]=='h'){
                st[i]=8;
            }
            else if(str[i]=='I'||str[i]=='i'){
                st[i]=9;
            }
            else if(str[i]=='J'||str[i]=='j'){
                st[i]=10;
            }
            else if(str[i]=='K'||str[i]=='k'){
                st[i]=11;
            }
            else if(str[i]=='L'||str[i]=='l'){
                st[i]=12;
            }
            else if(str[i]=='M'||str[i]=='m'){
                st[i]=13;
            }
            else if(str[i]=='N'||str[i]=='n'){
                st[i]=14;
            }
            else if(str[i]=='O'||str[i]=='o'){
                st[i]=15;
            }
            else if(str[i]=='P'||str[i]=='p'){
                st[i]=16;
            }
            else if(str[i]=='Q'||str[i]=='q'){
                st[i]=17;
            }
            else if(str[i]=='R'||str[i]=='r'){
                st[i]=18;
            }
            else if(str[i]=='S'||str[i]=='s'){
                st[i]=19;
            }
            else if(str[i]=='T'||str[i]=='t'){
                st[i]=20;
            }
            else if(str[i]=='U'||str[i]=='u'){
                st[i]=21;
            }
            else if(str[i]=='V'||str[i]=='v'){
                str[i]=22;
            }
            else if(str[i]=='W'||str[i]=='w'){
                st[i]=23;
            }
            else if(str[i]=='X'||str[i]=='x'){
                st[i]=24;
            }
            else if(str[i]=='Y'||str[i]=='y'){
                st[i]=25;
            }
            else if(str[i]=='Z'||str[i]=='z'){
                st[i]=26;
            }
            printf("%d",st[i]);
        }
        printf("\n");
    }
    return 0;
}
