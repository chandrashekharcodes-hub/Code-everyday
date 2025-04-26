#include<stdio.h>
#include<conio.h>
int main()
{
    int a ,b , c;
    printf("Enter two numbers:- ");
    scanf("%d %d",&a,&b);
    c = a+b;
    printf("Sum of ",a," and ",b," is ",c);
    getch();
    return 0;
}