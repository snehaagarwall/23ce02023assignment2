#include<stdio.h>
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d", &a);
    (a%2!=0 && a>=100 && a<=200)?printf("\n true"):printf("\n false");
}