#include<stdio.h>
void height(){
	float ft,inc,kg,ratio,me;
	printf("enter in feets and inches");
	scanf("%f%f",&ft,&inc);
	printf("enter wt in kg ");
	scanf("%f",&kg);
	
	inc=(ft*12)+inc;
	printf("The totalheight in inches is %f",inc);
	
	me=(0.0254*inc);
	printf("the height in meters is %f",me);
	
	ratio=kg/pow(me,2);
	printf("weight divided by square of height is %f",ratio);
	
}

int main ()
{
 height();
}
