#include <stdio.h>

int main() 
{
    int a;
    int c=5;
    int somma=0;
    scanf("%d",&a);
    while(a > 0)
    {
        somma= a + somma;
        if(somma<=30)
        {
            printf("il costo totale e' %d", somma*c);
        }
        else if(somma>30)
        {
            printf("il costo totale e' %d", somma*c-somma*c*10/100);
        }
        else if(somma>=50)
        {
            printf("il costo totale e' %d", somma*c-somma*c*15/100);
        }
        scanf("%d",&a);
    }
}