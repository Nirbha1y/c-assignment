void palindrome(int num){
    int rem , reverse=0,original;
    printf("Enter a number : ");
    scanf("%d",&num);
    original = num;
    while (num!=0){
        rem= num % 10;
        reverse = reverse * 10 + rem;
        num/=10;
    }
    if (original == reverse){
        printf("Number %d is palindrome",original);
    }
    else {
        printf("Number %d is not palindrome",original);
    }
}
