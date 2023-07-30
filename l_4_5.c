#include<stdio.h>
int main()

{
    int n;
    printf("Enter an integer:");
    scanf("%d",&n);
    printf( "Last Digit is:%d\n",n%10);
    while(n>10)
        n=n/10;
    printf("First Digit is :%d",n);
    return 0;


}
