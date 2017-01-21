#include<stdio.h>
int main()
{
    int T;
    char ch;
    scanf("%d",&T);
    while(T!=0,scanf("%c",&ch)){
        if(ch>='a'&&ch<='z'){
            printf("Lowercase Character\n");
        }
        else if(ch>='A'&&ch<='Z'){
            printf("Uppercase Character\n");
        }
        else if(ch>='0'&&ch<='9'){
            printf("Numerical Digit\n");
        }
        else{
            printf("Special Character\n");
        }
        T--;
    }
    return 0;
}

