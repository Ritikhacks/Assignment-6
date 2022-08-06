#include <stdio.h>
int main()
{ 
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum = 0;
    for (int i = 0; i <= 2*n; i=i+2)
    {
        sum += i;
    }
    printf("Sum of %d EVEN natural numbers is %d\n",n,sum);
}