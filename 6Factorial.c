#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("Enter a number: ");
    
    int fact = 1;
    if(n ==0 || n==1 )
    {
        fact = n;
        printf("factorial of %d is %d\n",n,fact);
    }
    else if(n<0)
    {  
         fact = -1;
        printf("Invalid number!\n");
    }
    else 
    {
        for (int i = 2; i <= n; i++)
        {
            fact *= i;
        } 
        printf("factorial of %d is %d\n",n,fact);
    }
    return 0;
}