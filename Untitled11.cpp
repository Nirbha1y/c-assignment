#include<stdio.h>
#include<math.h>
#define pi 3.14

void area(){
	float A,r;
	printf("enter radius");
	scanf("%f",&r);
	
	A=pi*pow(r,2);
	printf("The area is %f",A);
	
}
 int main (){
 	area();
 	return 0;
 }
