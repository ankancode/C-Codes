#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 5
int main(void)
{
	int t,i,s,n,j=2,flag=1;
        char **results=NULL;
	scanf("%d",&t);
        if(t>=1 && t<=1000)
        	{
        	results = malloc(t*sizeof(char*));
		for(i=0;i<t;i++)
			{
                        flag=1;
                        j=2;
			scanf("%d",&n);
                	
			if(n>=1 && n<=1000000)
                	   
				{
                	        s=ceil(sqrt(n));
                                
				while(flag==1 && j<=s)
					{
                                        
					if(n%j==0)
						{
						flag=0;
						}
                	                j++;
					}
                	        results[i]=malloc(MAX*sizeof(char));
                               
                	        if(flag==0)
					{
                	                results[i]="Sorry";
                                        
					}
                	        else
					{
					results[i]="LUCKY NUMBER";
                                        
					}
                                    
				}
               
		}

		for(i=0;i<t;i++)
			{
			printf("%s\n",results[i]);
			}
		}
return 0;
}

