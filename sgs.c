#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void sort(int *arr,int num)
	{
        int i,temp,j;
        for(i=0;i<num-1;i++)
        	{
		 for(j=i;j<num-1;j++)
                	 {
                  	 if(arr[j]>arr[j+1])
                  		{
                         	temp=arr[j];
                         	arr[j]=arr[j+1];
                         	arr[j+1]=temp;
                        	}
                         }
                }
	}
int leastcost(int *arr,int num)
	{
        int i,j,k,cost,counter,counter1=0;
	counter=ceil(num/2);
        for(i=0;i<counter;i++)
		{
                 k=0;
        	 for(j=0;j<4;j++)
			{ 
                         if(k<2)
				{
	                         cost=cost + arr[j+counter1];
                                }
                         k++; 
                        			
			}
                       counter1=counter1+4;
                 }
         return cost;
                     
         }
int main(void)
	{
	int t,n,k,i,j,*a,*p;
	scanf("%d",&t);
	if(t>=1 && t<=1000)
		{
		for(i=0;i<t;i++)
			{
			scanf("%d",&n);
			if(n>=1 && n<=1000)
				{
				a=malloc(n*sizeof(int));
                                p=malloc(t*sizeof(int));
				for(j=0;j<n;j++)
					{

					scanf("%d",&a[j]);
					}
				sort(a,n);	
                		p[i]=leastcost(a,n);
				}
                        
			}
		}
        for(i=0;i<t;i++)
		{
		printf("%d\n",p[i]);
                }
        return 0;
	}
