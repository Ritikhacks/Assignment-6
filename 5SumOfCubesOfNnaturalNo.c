#include <stdio.h>
int main()
{ 
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum = 0,i;
    for (i = 1; i <= n; i++)
    {
        sum += i*i*i;
    }
    printf("Sum of CUBES of %d Natural numbers is %d\n",n,sum);
}