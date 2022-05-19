#include<stdio.h>
//temp of a day
void  weather(){
	float temp;
	printf("Enter the temp in farhen");
	scanf("%f",&temp);
	
	if(temp>60 && temp<80) printf("It is a nice day");
	else if (temp <=60) printf("It is a cold day");
	else if (temp<=80) printf("It is a hot day");
	} 
	
	int main (){
		weather();
		return 0;
	}
