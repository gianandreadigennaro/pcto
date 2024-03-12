#include <stdio.h>

int main() 
{
int a;
scanf("%d",&a);
if (a>10)
{
    printf("a e' maggiore di 10\n");
}
else if (a==5)
{
    printf("a e' uguale a 5\n");
}
else if (a>5)
{
    printf("a e' maggiore di 5\n");
}
else 
{
    printf("a e' minore di 5\n");
}
}