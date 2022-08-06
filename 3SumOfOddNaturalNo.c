#include <stdio.h>
int main()
{ 
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum = 0;
    for (int i = 1; i <= 2*n-1; i=i+2)
    {
        sum += i;
    }
    printf("Sum of %d ODD natural numbers is %d\n",n,sum);
    return 0;
}