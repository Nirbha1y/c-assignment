#include <stdio.h>
//Following pattern: 
    // 1                  1
    // * 0                2
    // 3 * *              3 
    // * 0 * 0            4
    // 4 * * *            5

void Pattern(int num){
    int counter=0;
    for (int i=1; i<=num; i++){
        counter++;
        for (int j=1; j<=i; j++){
            if (i%2==0 && j%2==0){
                printf("0");
            }
            else if (i%2==0 && j%2!=0){
                printf("");
            }
            else {
                if (counter % 5 == 0){
                    if (i%2!=0 && j==1){
                        printf("%d", i-1);

                }

                    else {
                        if (i % 5 == 0 && j!=1){
                            if (j % 5 == 0){
                                break;
                            }
                            printf("");
                        }
                }
            }
                else {
                    if (j == 1){
                    printf("%d", i);
                    }
                    else {
                        printf("*");
                    }
                }
        }
    }
            printf("\n");
}
}
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    Pattern(number);
    return 0;
}
