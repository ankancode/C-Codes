#include<stdio.h>
#include<stdlib.h>
int t=0,i=0,n=0,k=0,*arr=NULL,left=0;
int main(void)
{

scanf("%d",&t);

if(t>=1 &&t<=50)
	{
        arr=malloc(sizeof(int)*t);
        for(i=0;i<t;++i)
		{
              

		scanf("%d %d",&n,&k);

	       

			if(n>=1 &&  n<=100000 && k>=1 && k<=100000)
			{
 			left=n%k;
                        arr[i]=left;
		        
			}
                        
                }
        for(i=0;i<t;i++)
		{
                 printf("%d\n",arr[i]);
		}
        }
return 0;
}
