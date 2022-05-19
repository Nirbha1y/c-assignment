#include <stdio.h>
int main(){
	int num, sum;
	printf("Enter a number: ");
	scanf("%d", &num);
	for (int i = 1; i < num; i ++){
		int remainder = num % i;
		if (remainder == 0)
		{
			 sum = sum + i;
		}
	}
	if ( sum == num)
	printf("%d is a perfect number", num);
	else
	printf("%d is not a perfect number", num);
	return 0;
}
