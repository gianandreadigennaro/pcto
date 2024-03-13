#include <stdio.h>

int add(int a, int b)
{
    printf("il risultato e' %d\n", a+b);
    return a+b;
}
int sott(int a, int b)
{
    printf("il risultato e' %d\n", a-b);
    return a-b;
}
int div(int a, int b)
{
    printf("il risultato e' %d\n", a/b);
    return a/b;
}
int mol(int a, int b)
{
    printf("il risultato e' %d\n", a*b);
    return a*b;
}
int main()
{
   int a;
   int b;
    int f;
    printf("inserisci 2 numeri\n");
    scanf("%d %d",&a ,&b);
    printf("inserisci 1 per add 2 per sott 3 per div 4 per molt\n");
    scanf("%d",&f);
    if(f==1)
    {
       printf("%d",add(a,b));
    }
    else if(f==2)
    {
      printf("%d",sott(a,b));
    }
    else if(f==3)
    {
         printf("%d",div(a,b));
    }
    else if(f==4)
    {
        printf("%d",mol(a,b));
    }
    return 0;
}