#include<stdio.h>
int main()
{
    int n;
    double t_run,p_run,h_ball;
    double pp_run,pr_run;
    scanf("%d",&n);
    while(n--){
        scanf("%lf %lf %lf",&t_run,&p_run,&h_ball);
        pp_run=(p_run/(300-h_ball))*6.00;
        pr_run=((t_run+1)-p_run)/(h_ball/6.00);
        printf("%.2lf %.2lf\n",pp_run,pr_run);
    }
    return 0;
}
