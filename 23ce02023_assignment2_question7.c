#include<stdio.h>
#include<math.h>
int main()
{
    int mealcost,tippercent,taxpercent,tip,tax,totalcost;
    printf("enter mealcost: ");
    scanf("%d", &mealcost);
    printf("\n enter tippercent:");
    scanf("%d", &tippercent);
    printf("enter taxpercent:");
    scanf("%d",&taxpercent);
    tip=(tippercent*mealcost)/100;
    tax=(taxpercent*mealcost)/100;
    totalcost = mealcost+ tip+tax;
    printf("totalcost is %d\n",totalcost);

}