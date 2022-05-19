#include<stdio.h>
int main ()
{int su,mi,mu,di;
	int a , b;
	printf("Enter the number a and b");
	scanf("%d%d",&a,&b);
 su= sum();
 mi= sub();
 mu= product();
 di= division();
  return 1;
}
 int sum()
{
	int a , b , add;
	add = a + b;
	printf("Sum : %d\n",add);
}
//function for subtraction
int sub()
{
	int a , b , sub;
	sub = a - b;
	printf("Sub : %d\n",sub);
	
}
//Function for mult
int product()
{
	int a , b , mul;
	mul = a * b;
	printf("Product : %d\n",mul);
}
//Function for div
int division()
{
	int a ,b,div;
	div = a / b;
	printf("Division : %d/n",div);
}
