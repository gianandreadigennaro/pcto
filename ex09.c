#include <stdio.h>

int main() 
{
int a;
int b;
scanf("%d %d",&a ,&b);
if (a%b==0)
{
    printf("a e' multiplo di b\n");
}
else
{
    printf("a non e' multiplo di b\n");
}
}