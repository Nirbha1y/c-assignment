#include<stdio.h>
void inc()
{ int a=11,b=5;
int A,B;
A=(++a)+(a++);
B=(++b)+(b++);
printf ("The value of a is %d",A);
printf("The value of B is %d",B);
	
}

int main(){
inc();
return 0;	
}
