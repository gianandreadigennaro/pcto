#include <stdio.h>

int main() 
{
    int n;
    int f = 1;
    int a=2;
    scanf("%d", &n);

    while(a<(n/2)+1)
    {
        if(n%a==0)
        {
            f = 0;
        }
        a++;
    }
    if(f == 1)
    {
        printf("e primo");
    }
    else
    {
        printf("non e primo");
    }
}