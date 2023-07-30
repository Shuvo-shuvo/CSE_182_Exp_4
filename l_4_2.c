#include<stdio.h>
#include<conio.h>
main()
{
    int i=2,n;
    printf("Enter a limit:");
    scanf("%d",&n);
    while(i<=100)
    {
        printf("\t %d",i);
        i=i+2;
    }
}
