void armstrong(int num){
    int sum=0,n=0;
    int original , rem;
    printf("Enter a number : ");
    scanf("%d",&num);
    original = num;

    for(original = num; original!=0;++n){
        original/=10;
    }


    for(original = num; original!=0; original/=10){
        rem=original % 10;

        // sum = sum + pow(rem,n);
    }

    if(sum == num){
        printf("Number is Armstrong");
    }
    else {
        printf("Number is not Armstrong");
    }
}
