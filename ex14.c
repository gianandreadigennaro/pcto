#include <stdio.h>

int main() 
{
int a;
int b;
int c;
scanf("%d %d %d",&a ,&b ,&c);
if(a==b,b==c,a==c)
{
    printf("il triangolo e' equilatero\n");
}
else if (a==b)
{
    printf("il triangolo e'isoscele\n");
}
else if (a==c)
{
    printf("il triangolo e'isoscele\n");
}
else if (b==c)
{
    printf("il triangolo e'isoscele\n");
}
if(a!=b,b!=c,a!=c)
{
    printf("il triangolo e' scaleno\n");
}
}