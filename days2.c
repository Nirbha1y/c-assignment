#include<stdio.h>
//wap to read age in no of days and convert to yr,th,day

void indays(){
	int t_days,yr,mm,days;
	printf("Enter the total days");
	scanf("%d",&t_days);
	
	yr=t_days/365;
	mm=(t_days-yr*365)/30;
	days=t_days -(yr*365-mm*30);
	
	printf("You are %d yr,%d month and %d days \n",yr,mm,days);
} 

int main (){
	indays();
	return 0;
}
