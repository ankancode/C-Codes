#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
int t,n;
long int x[250000],y[250000],s=0,e=0,i,j,k,steps=0;

scanf("%d",&t);

while(t--)
{

scanf("%d",&n);

for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 {
    scanf("%ld",&k);
    x[k-1]=i;
    y[k-1]=j;
     
 }
}

s = x[0];
e = y[0];
for(i=0;i<pow(n,2);i++)
{
//printf("%ld %ld\n",x[i],y[i]);
steps=steps+(abs(s-x[i])+abs(e-y[i]));
        s=x[i];
        e=y[i];
//printf("%ld\n",steps);
}
printf("%ld\n",steps);
steps=0;
}
return 0;
}
