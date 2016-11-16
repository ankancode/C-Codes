#include<stdio.h>
#include<stdlib.h>
int fact(int m)
	{
	
	if(m==0)
		{
		return 1;
		}
	else
		{
		return m*fact(m-1);
		}
	}
int main(void)
	{
	int i=0,n=0,counter=1,counter2=0;
	scanf("%d",&i);
        for(counter=1;counter<=i;counter++)
		{
		scanf("%d",&n);
		while((fact(n)%10)==0)
			{
                        counter2++;
			}
                printf("%d",counter2);
		}
        
        return 0;
	}
