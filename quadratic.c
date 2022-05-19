#include<stdio.h>
void main(int b , int a , int c){
    float r1,r2,discriminant,imgpart,realpart;
    printf("Enter b , a , and c respectively : ");
    scanf("%d%d%d",&b,&a,&c);
    discriminant = b*b-4*a*c;

    if (discriminant > 0){
        // r1 = (-b + sqrt(b*b-4*a*c))/(2*a);
        // r2 = (-b - sqrt(b*b-4*a*c))/(2*a);
    }
    else if ( discriminant == 0){
        r1 = r2 = -b/(2*a);
        printf("root1 = root2 = %.2f",r1);
    }
    else {
        realpart = -b / (2 * a);
        // imgpart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2f+%.2f and root2 = %.2f-%.2f", realpart, imgpart, realpart, imgpart);
    }
}
