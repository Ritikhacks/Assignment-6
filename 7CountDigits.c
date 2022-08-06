#include <stdio.h>
int main()
{
    int n,temp;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp = n;
    int digits = 0;
    while(temp>0)
    {
        digits++;
        temp = temp/10;
    }
    printf("No of digits in %d is %d\n",n,digits);
}