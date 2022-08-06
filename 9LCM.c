#include <stdio.h>
int main()
{
    int a1,b1;
    scanf("%d%d",&a1,&b1);
    int a = a1;
    int b = b1;
    int lcm = 1;

    int i = 2;
    while (a!=1 || b!=1) //****Inner statement should be true****
    {
        if(a%i == 0 || b%i == 0)
        {   
            lcm = lcm*i;
            printf("%d\n",lcm);
            if(a%i == 0)
            {
                a = a/i;
            }
            if(b%i == 0)
            {
                b = b/i;
            }
        }
        else 
            i++;
    }
    printf("%d\n",i);
    printf("%d %d\n",a,b);
    printf("LCM of %d and %d is %d\n",a1,b1,lcm);
    
    return 0;
}