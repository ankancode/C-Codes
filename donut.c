#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{

int t,flag=1;
long long int n,m,i=0,j=0,temp,arr[20000],k;

scanf("%d",&t);

while(t--)
{

scanf("%lld %lld\n",&n,&m);

for(i=0;i<m;i++)
{
scanf("%lld",&arr[i]);
}

for(i=m-1;i>=1;i--)
{
 flag=1;
 for(j=0;j<i;j++)
 {
  if(arr[j]>arr[j+1])
    {
     temp=arr[j];
     arr[j]=arr[j+1];
     arr[j+1]=temp;
     flag=0;
    }
  }
  if(flag==1)
  {
   break;
  }
 }

 k = m-1; 
 j = 0;

for(i=1;i<=k;i++)
{
 if(arr[j]!=0)
 {
  arr[j]--;
 }
 else
 {
  k=k-1;
  ++j;
  arr[j]--;
 }
}

j =0;

printf("%lld\n",k);
}
return 0;
}
