#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int i,n,k,t,count=0;
scanf("%d %d",&n,&k);
 	if(n<=10000000 && k<=10000000)
 	{
  	for(i=1;i<=n;i++)
  		{
   		scanf("%d",&t);
   		if(t%k==0 && t<=1000000000)
   			{
    			count++;
   			} 
  		}
  	printf("%d\n",count);
 	}
return 0;
}
