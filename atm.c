#include<stdio.h>
#include<stdlib.h>
void main()
{
float a,w,bal;
scanf("%f %f",&w,&a);
if((int)w%5!=0 || w+0.50>a)
{
printf("%.2f\n",a);
}
else
{
bal=a-w-0.50;
printf("%.2f\n",bal);
}
}
