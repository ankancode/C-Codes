#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int isPowerOfTwo(long unsigned int x)
{
return ((x!=0) && ((x&(~x+1))==x));
}

int main(void)
{
	long unsigned int i,t,a,b,test,test1,count;
        long int *arr;
	scanf("%lu",&t);
		if(t<=200)
		{
			arr = malloc( t * sizeof( long int ));
			for(i=0;i<t;i++)
			{
				scanf("%lu %lu",&a,&b);
				test=isPowerOfTwo(b);
                               
				if(a<=10000000 && b<=10000000 && test==1)
				{ 
                                        
					 count=0;
					 while(a!=b)
 					 {
						 if(a%2==0)
  						 { 
   							 test1=isPowerOfTwo(a);
   							 if(a<=b/2 && test1==1)
    							 {
    								  a=a*2;
   							          count++;
    							 }
                                                         else{
   							 a=a/2;
   							 count++;
                                                         }
 						  }
						  else
 						  { 
 							   if(a!=1)
 							    {
 								     a=(a-1)/2;
 								     count++;
 							    }
                                                            else{
 							    a=a*2;
   							    count++;}
 						  }
 					  }
                                          arr[i]=count;
				}
                                else
                                arr[i]=-1;
			}
		}
for(i=0;i<t;i++)
{
	printf("%ld\n",arr[i]);
}
return 0;
}
