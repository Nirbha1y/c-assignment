#include<stdio.h>
void HCF(){
	int n1,n2;
	printf("Enter numbers");
	scanf("%d%d",&n1,&n2);
	int HCF,min,i;
	min=(n1<n2)?n1:n2;
	for (i=1;i<=min;i++){
		if (n1%i==0 && n2%i==0) HCF=i;
			
			}
		printf("HCF is %d",HCF);
}
int main (){
	HCF();
}
