#include<stdio.h>
int main()

{
    int n,count=0;
    printf("Enter no\n");
    scanf("%d",&n);
    while(n>0)
    {
        n=n/10;
        count++;
    }
    printf("Total %d Digits",count);
    return 0;

}
