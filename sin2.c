#include<stdio.h>
#include<stdlib.h>
#include<math.h>

ispersq(int n)
{
int i=1;
while(n>0)
{
n=n-i;
i=i+2;
}
if(n==0)
return 1;
else
return 0;
}

int main()
{

long long int q,l,r,diff,result;
long double s1,s2;
scanf("%lld",&q);

while(q--)
{

scanf("%lld %lld",&l,&r);

result=ispersq(l);

s1=floor(sqrt(l));
s2=floor(sqrt(r));


diff=s2-s1;

if(result==1)
{
diff=diff+1;
}

if(l!=r)
{
 printf("%lld\n",diff);
}


}
return 0;
}
