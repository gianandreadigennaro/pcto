#include <stdio.h>

int main() 
{
    int a;
    int c=1;
    int somma=0;
    scanf("%d",&a);
    while(a>=0)
    {
    somma=somma+a;
    printf("la media e' %d", somma/c);
    scanf("%d",&a);
    c++;
    }
}