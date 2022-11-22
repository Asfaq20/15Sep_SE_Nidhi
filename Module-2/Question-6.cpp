#include<stdio.h>
int main()
{
	int td,y,d;
	printf("enter the number of days=");
	scanf("%d",&td);
	
	y=(td/365);
	d=(td%365)/30;
	printf("years = %d\n days =%d",y,d);
	
}
