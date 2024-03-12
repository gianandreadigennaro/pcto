#include <stdio.h>

int main() 
{
int a;
int b;
int c;
scanf("%d %d %d",&a ,&b ,&c);
if (a+b>c)
{
    printf("possono essere le lunghezze dei lati di un triangolo\n");
}
else
{
    printf("non possono essere le lunghezze dei lati di un triangolo\n");
}
}