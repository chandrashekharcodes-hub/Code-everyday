#include<stdio.h>
#include<conio.h>
int main()
{
    int i ,x;
    printf("Enter a number");
    scanf("%d",&x);
    i=2;
    while (i <= x-1)
    {
        if ( x % i == 0)
         break;
         i++;

    }
    if (x == i)
        printf("Prime Number");
    else
        printf("Not prime");
}
