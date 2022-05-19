#include<stdio.h>
//to find SI
   int main (){
	int p,t,r, simple_i,simple;
	printf("Enter the principal,time and rate:");
	scanf("%d%d%d",&p,&t,&r);
     simple_i= simple(p,t,r);
     	printf("The Simple interest is%d", simple_i);
     	return 0;
	}
	
	 int simple(int p,int t,int r){ 
	 int SI;
		SI= (p*t*r)/100;
		return  ;
		
	}
