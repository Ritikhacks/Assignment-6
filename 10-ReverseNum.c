#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int temp = n;
    int rev=0;
    int LastDigit = 0;
    while(temp>0)
    {
        LastDigit = temp%10;
        rev = rev*10 + LastDigit;
        temp = temp/10;
    }
    printf("Reverse of %d is %d\n",n,rev);
    return 0;
}