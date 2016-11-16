#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int isPowerOfTwo(long unsigned int x)
{
return ((x!=0) && ((x&(~x+1))==x));
}


long long unsigned int check(long long unsigned int num )
{ 
long long unsigned int num1,count=0;
int flag=1,test;
num1=num;
while(num!=2  && flag==1)
{
	if( num%2==0 ) 
	{
         test=isPowerOfTwo(num);
         if(test==1 && num1!=num)
         {
          num=num/2;
          count++;
         }
         else
         {
	 num = num/2 + 1;
 	 count++;
         }
	}
	else
	{
 	 num = (num-1)/2 + 1;
         count++;
         if(num==1)
	 {
          flag=0;
          }
	}
}

if(num1!=2 && num1!=1)
{
num=num/2;
count++;
}
if(num1==2)
{
count=2;
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
