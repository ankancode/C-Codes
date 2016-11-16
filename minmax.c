#include<stdio.h>
#include<stdlib.h>

int main()
{
int t;
long long signed int n,i,arr[50000],maxmin=0,cost;

scanf("%d",&t);

while(t--)
{

scanf("%lld",&n);

scanf("%lld",&arr[0]);

maxmin=arr[0];

for(i=1;i<n;i++)
{
 
 scanf("%lld",&arr[i]);
 if(maxmin>arr[i])
{
	maxmin=arr[i];
}
}
cost = maxmin*(n-1);
printf("%lld\n",cost);
}

return 0;
}
