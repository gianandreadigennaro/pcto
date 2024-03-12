#include <stdio.h>

int main() 
{
int a;
scanf("%d",&a);
if (a%4==0, a%100!=0)
{
    printf("a e' bisestile\n");
}
else if(a%400==0)
{
    printf("a e' bisestile\n");
}
else
{
    printf("a non e' bisestile");
}
}