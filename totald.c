#include<stdio.h>
void total()
{
	int yy,mm,dd,Total_days;
	printf("Enter year,month and day respectively \n");
	scanf("%d%d%d",&yy,&mm,&dd);
	
	Total_days=yy*365+mm*30+dd;
	printf("The total number of days is %d",Total_days);
}

int main (){
	total();
	return 0;
}
