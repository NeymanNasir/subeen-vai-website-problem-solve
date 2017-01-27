#include<stdio.h>

int main()
{
    int T,temp,hour,minute,second,total_second,total_passing_tally;
    int hour1,hour2,minute1,minute2,second1,second2,passing_tally_per_second;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d %d",&hour1,&minute1,&second1);
        scanf("%d %d %d",&hour2,&minute2,&second2);
        scanf("%d",&passing_tally_per_second);
        if(second2<second1){
            second2+=60;
            minute2-=1;
        }
        if(minute2<minute1){
            minute2+=60;
            hour2-=1;
        }
        if(hour2<hour1){
            hour2+=24;
        }

        hour=(hour2-hour1)*3600;
        minute=(minute2-minute1)*60;
        second=second2-second1;

        total_second=hour+minute+second;

        total_passing_tally=total_second*passing_tally_per_second;
        printf("%d\n",total_passing_tally);
    }
    return 0;
}
