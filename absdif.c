#include<stdio.h>
#include<stdlib.h>
#include<math.h>

long long unsigned int absdif(long long signed int *temparr, long long signed int len)
{
long long signed int *temp1,count,t1,t2,temp=0,temp2;
int interdif,i;
count=len-1;

temp1 = malloc((len-1)*sizeof(long long signed int));
for(i=0;i<len-1;++i)
{
	
	interdif = abs(temparr[i-i]-temparr[i+1]);
           
        temp1[i] = interdif;
	temp = temp+interdif;
	
       
}


temp2=temp;
t1=temp1[0];
t2=temp;
for(i=0;i<len-2;i++)
{
if(i==0)
{

temp2=temp1[i];
}
else
{
temp2=abs(temp1[i]-temp1[i-1]);
}

t1=temp2*count;

t2=abs(t2-t1);

temp=temp+t2;
 

count--;

}

return temp;
}



int main(void)
{
	long long signed int t,n,*arr,*dif;
        int i,j;
	scanf("%lld",&t);
	if(t>=1 && t<=100)
	{
                dif=malloc(t*sizeof(long long signed int));
		for(i=0;i<t;i++)
		{
			scanf("%lld",&n);
			if(n>=1 && n<=pow(10,5))
			{
				arr=malloc(n*sizeof(long long signed int));
                                
				for(j=0;j<n;j++)
				{
					scanf("%lld",&arr[j]);
				}
                                dif[i]=absdif(arr,n);
			}

		}
	}
for(i=0;i<t;i++)
printf("%lld\n",dif[i]);
return 0;
}
