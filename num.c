#include<stdio.h>
//calculatesum of all integers divisible by 7 between 100 to 200

void div7(){
	int i,j=0;
	for(i=100;i<=200;i++){
		if(i%7==0) j+=i;
	}
	printf("%d",j);
	
}
 int main (){
 	div7();
 	return 0;
 }
