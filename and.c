#include<stdio.h>
#include<stdlib.h>



int main()
{

long long ans=0,k=1,temp;
int n,arr[30]={0},num,i,j;
scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&num);

		for(j=0;j<30;j++)
		{
			temp = (num&(1<<j));
			if(temp)
			++arr[j];
		}
	}
	for(j=0;j<30;j++)
	{
		temp = ((arr[j]*(arr[j]-k))) * (k<<j);
                ans = ans + temp;
		
	}
printf("%lld\n",ans/2LL);
return 0;
}
