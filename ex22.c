#include <stdio.h>

int main() 
{
    int a[5] = {12,11,57,32,2};
    int posizione = 0;
    int numero_stampe = 0;
    int comparatore=0;
    while(numero_stampe<5)
{
    while(posizione<=4)
    {
        if(a[posizione] == comparatore)
        {
            printf("%d\n", comparatore);
            numero_stampe = numero_stampe + 1;
            posizione++;
        }
        else
        {
            posizione++;
        }
    }
        posizione=0;
        comparatore++;
    }
}