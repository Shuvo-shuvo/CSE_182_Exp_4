#include<stdio.h>
int main()

{
    int num,count=1,sum=0;
    printf("Enter a positive number\n");
    scanf("%d",&num);
    printf("sum of natural numbers from 1 to %d is :\n",num);
    while(count <= num)
    {
        sum = sum + count;
        printf("%d",count);
        count++;
        if(count > num)
        {
            printf("=%d\n",sum);
        }
        else
        {
            printf("+ ");
        }
    }
    return 0;

}
