#include<stdio.h>
#include<stdlib.h>
#include<math.h>


long long unsigned int check(long long unsigned int num )
{ 
long long unsigned int list;
if( num%2==0 ) 
{
 list = num/2 + 1;
}
else
{
 list = (num-1)/2 + 1;
}
return list;
}




int main(void)
{
long long unsigned int i=0,t,n,*arr,count=0;
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
