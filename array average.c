#include<stdio.h>
int main()
{

    int a[1000],sum=0,i;
    float avg;
    printf("Enter 1000 number");
    for(i=0;i<=999;i++)
        scanf("%d",a[i]);
    for(i=0;i<=999;i++)
        sum = sum + a[i];
    avg = sum /1000;
    printf("%f",avg);
    return 0;

}
