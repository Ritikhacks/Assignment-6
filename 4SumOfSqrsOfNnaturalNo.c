#include <stdio.h>
int main()
{ 
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum = 0,i;
    for (i = 1; i <= n; i++)
    {
        sum += i*i;
    }
    printf("Sum of SQUARES of %d Natural numbers is %d\n",n,sum);
}