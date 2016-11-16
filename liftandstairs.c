#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
long  int t,n,h,x,i,l,s,temp1,temp2,t1,t2;

scanf("%ld\n",&t);
while(t--)
{

scanf("%ld %ld %ld %ld\n",&n,&h,&x,&i);
scanf("%ld %ld",&l,&s);
//printf("%ld %ld %ld %ld %ld %ld",n,h,x,i,l,s);
/*temp1=1;
t1=1;
temp2=1;
t2=1;*/

temp1=abs(i-h);
//printf("%ld\n",temp1);
t1=temp1*s;
//printf("%ld\n",t1);

temp2=abs(x-h);
//printf("%ld\n",temp2);
t2=(temp2*l)+(temp1*l);
//printf("%ld\n",t2);

if(t1<t2)
{
printf("STAIRS\n");
}
else
{
printf("LIFT\n");
}

}

return 0;
}
