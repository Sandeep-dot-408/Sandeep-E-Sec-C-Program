#include<stdio.h>
int main(){

	int no_of_days,no_of_week,no_of_remaining_days;
	scanf("%d",&no_of_days);//65
	no_of_remaining_days=no_of_days % 7;
	no_of_week=no_of_days/7;
	printf("no_of_weeks : %d\n",no_of_week);//9
	printf("no_of_remaining_days : %d",no_of_remaining_days);//2
	}
	
	
