#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>



int main(void)
{
	long long int n,k,t;
	char *str;
long long int i,j,count=0;
int flag=0;
char temp;
	
	scanf("%lld %lld %lld\n ",&n,&k,&t);
       // fflush(stdin);
	 str=malloc((n)*sizeof(char));
                               scanf("%s",str);
            fflush(stdin);
/*
	if(n>=1 && n<=pow(10,5))
	{ 
	       
            
		scanf("%lld\n",&k);
                fflush(stdin);
		if(k>=1 && k<=n)
		{
			scanf("%lld\n",&t);
                        fflush(stdin);
                        
			if(t>=1 && t<=pow(10,9))
			{
                               str=malloc((n+1)*sizeof(char));
                               scanf("%s",str);
   	  	               
                               printf("%s",str);
     		               highest(str,n,k,t);
	   	        }
		}
	}*/
 
puts(str);



for(i=0;i<t-1;i++)
{
 	if((i+k)>(n-1))
	{
		break;
	}
 	printf("%c",str[i]);
	if(str[i]==0 && str[i+k]==1)
 	{
 		temp=str[i];
	        str[i]=str[i+k];
  	        str[i+k]=temp;
 	        flag=1;
 	        count++;

        printf("%lld\n",count);
 	}
	
	j=i;

	while(count<(t-1))
	{
 		if((j-k)>=0)
		{
 			if(flag==1 && str[j-k]==0)
			{
				  temp=str[j-k];
				  str[j-k]=str[j];
				  str[j]=temp;
				  j=j-k;
				  count++;
			}
 			else
			{
				 flag=0;
				 break;
			}
                        printf("%lld\n",count);
		}
	}
	
	if(count==(t-1))
	{
	break;
	}

}
printf("%s\n",str);


return 0;
}

