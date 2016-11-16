#include<stdio.h>
#include<stdlib.h>
#include<math.h>

long long unsigned int check(long long unsigned int num )
{
long long unsigned int prev=1,fib=1,count=0,temp;
if(num!=1 && num!=2)
{
	do
	{       
	        temp=fib;
 	        fib=prev+temp;
  	        prev=temp;
  	        count++;
	}
	while(fib<num);
	if(fib>num)
	{
		count--;	
	}	
        count++;
}
else
{
	if(num==1)
	{
	count=1;
	}
	if(num==2)
	{
	count=2;
	}
}

return count;
}
int main(void)
{
long long unsigned int i=0,t,n,*arr;
scanf("%llu \n",&t);
if(t>=1 && t<=100000)
 	{
		arr=malloc(t*sizeof(long long unsigned int));
			while(i<t)
			{
                               
 				scanf("%llu",&n);
       			         if(n>=1 && n<=pow(10,18))
         			       {
                                  
            				arr[i]=check(n);
            			       }
                           ++i;
                
			}
	}

for(i=0;i<t;i++)
{
printf("%llu \n",arr[i]);
}
return 0;
}
