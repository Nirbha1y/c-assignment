#include<stdio.h>
// sum and difference of two numbers
  int add(int a, int b)
  {int sum =a+b;
  return sum;
  }
  
  int diff(int a, int b)
  {int sub =a-b;
  return sub;
  }
  
  int main ()
  {int a,b,sum, difference;
  printf("Enter any two numbers:");
  scanf("%d%d",&a,&b);
  sum= add(a,b);
  difference= diff(a,b);
  
  printf("The sum is %d and difference is %d",sum,difference);
  
  }
  
