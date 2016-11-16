#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
long int t,h,n,m,t1,actual,steps,reach,left;
long double nextstep,finalsteps;

scanf("%ld",&t);
while(t--)
{

scanf("%ld %ld %ld",&h,&n,&m);

t1=h-n;

actual=n-m;

steps=t1/actual;

reach=steps*actual;
//printf("%ld\n",reach);

if(reach<t1)
{
steps=steps+1;
reach=steps*actual;
//printf("%ld\n",reach);

}

left = h-reach;
//printf("%ld\n",left);

if(left>0)
{
nextstep = (long double)left/n;
//printf("%.2Lf\n",nextstep);
}

finalsteps = (long double)steps + nextstep;

printf("%.2Lf\n",finalsteps);
}
return 0;
}
