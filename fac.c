#include<stdio.h>
#include<conio.h>
void factor(){
	
	int n,factorial,i;
	printf("Enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		factorial =n*i;
		printf("Factorial is %d",factorial);
	}
}

int main(){
	factor();
	getch();
}
