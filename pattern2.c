//     *
//     2 2
//     * * * 
//     4 4 4 4
//     * * * * *

#include <stdio.h>

void Pattern(int n){
        for (int i = 1; i <= n; i++){
        for (int j = 1; j <=i; j++){
            if (i % 2 == 0){
                printf("%d", i);
        }
        else {
            printf("*");
        }
    }
        printf("\n");
}
}


int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    Pattern(num);
    printf("The pattern is now printed!!");
return 0;
}
