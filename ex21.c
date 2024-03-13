#include <stdio.h>

int main() 
{
    char parole[25];
    int a = 0;
    scanf("%[^\n]s",parole); 
    while(parole[a]!='\0')
    {
        if(parole[a]>=65 && parole[a]<=90)
        {
            parole[a]=parole[a]+32;
        }
        else if(parole[a]>=97 && parole[a]<=122)
       {
       parole[a]=parole[a]-32;
       }
    a++;
    }
    printf("%s",parole);

}