#include <stdio.h>

int main() 
{
int a;
int b;
scanf("%d",&a);
if (a==1969)
{
    printf("sei nato nell'anno in cui l'uomo e' andato sulla luna\n");
}
else if(a < 1969)
{
    b = 1969-a;
    printf("sei nato %d anni prima che l'uomo andasse sulla luna", b);
}
else if(a > 1969)
{
    b= a - 1969;
    printf("sei nato %d anni dopo che l'uomo e' andato sulla luna", b);
}
}