#include<stdio.h>
void main(int num){
    int num1 = 1 , num2 =1 , sum;

    printf("Enter number of elements : ");
    scanf("%d",&num);
    printf("%d ,%d ,",num1,num2);
    for(int i =2; i<=num;++i){
        sum = num1 + num2;
        printf("%d , ",sum);
        num1 = num2;
        num2 = sum;

    }
}
