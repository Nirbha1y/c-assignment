#include<stdio.h>
// converison of upper to lower and vice versa
   int  casc(){
	char n;
	printf("Enter the character:");
	scanf("%c",&n);
	
	if (n>=97 && n<=122) {n-=32;
	}
	else if (n>=65 && n<=98) {n+=32;
	}
	else {printf("Invalid");
		return 0;
	
	}

	printf("%c \n",n);
		}
		

			int main (){
		casc();
		}		
		
