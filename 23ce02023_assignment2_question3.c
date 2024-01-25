#include<stdio.h>
int main()
{
    int noofdays,year,month,weeks,days;
    printf("enter noofdays\n");
    scanf("%d", &noofdays);
    year=noofdays/365;
    noofdays=noofdays-365*year;
    month=noofdays/30;
    noofdays=noofdays-month*30;
    weeks=noofdays/7;
    noofdays=noofdays-weeks*7;
    days=noofdays;
    printf("\n year=%d , months=%d ,weeks=%d ,days=%d", year,month,weeks,days);

    
}