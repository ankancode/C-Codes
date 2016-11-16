#include<stdio.h>
#include<stdlib.h>
unsigned long long int i,n=0,counter=0,*p=NULL,counter2=0,v;
unsigned long long int fact(int m)
	{
	
	if(m<=0)
		{
		return 1;
		}
	else
		{
		return m*fact(m-1);
		}
       
	}
unsigned long int main()
	{
	
	scanf("%llu",&i);
        p=(unsigned long long int*)malloc(sizeof(unsigned long long int)*i);
	for(counter=0;counter<i;counter++)
		{
		counter2=0;
		scanf("%llu",&n);
		v=fact(n);
		printf("%llu\n",v);
		while((v%10)==0)
			{
                	v=v/10;
                        counter2++;
                        
			}
                p[counter]=counter2;
		}
        for(counter=0;counter<i;counter++)
                {
		printf("%llu\n",p[counter]);
                }
        return 0;
	}
