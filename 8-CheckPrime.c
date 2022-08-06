#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int i;
    for (i = 2; i < n; i++)
    {
        if(n%i==0){
            printf("NOT Prime!\n");
            break;
        }
    }
    if(i == n)
    {
        printf("Prime number\n");
    }
}