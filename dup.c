#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void highest(char *strcheck,long long signed int n1,long long signed int k1,long long signed int t1)
{

long long signed int i,j,count=0;
int flag=0;
char temp;

for(i=0;i<t1-1;i++)
{
 	if((i+k1)>(n1-1))
	{
		break;
	}
 	printf("hghhk");
	if(strcheck[i]==0 && strcheck[i+k1]==1)
 	{
 		temp=strcheck[i];
	        strcheck[i]=strcheck[i+k1];
  	        strcheck[i+k1]=temp;
 	        flag=1;
 	        count++;

        printf("%lld\n",count);
 	}
	
	j=i;

	while(count<(t1-1))
	{
 		if((j-k1)>=0)
		{
 			if(flag==1 && strcheck[j-k1]==0)
			{
				  temp=strcheck[j-k1];
				  strcheck[j-k1]=strcheck[j];
				  strcheck[j]=temp;
				  j=j-k1;
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
	
	if(count==(t1-1))
	{
	break;
	}

}
printf("%s\n",strcheck);

}


int main(void)
{
	long long int n,k,t;
	char *str;
	scanf("%lld\n",&n);

	if(n>=1 && n<=pow(10,5))
	{ 

	        str = malloc(n*sizeof(char));
		scanf("%lld\n",&k);
		if(k>=1 && k<=n)
		{

			scanf("%lld\n",&t);
			if(t>=1 && t<=pow(10,9))
			{
                               scanf("%s\n",str);
                               printf("hig");
                               highest(str,n,k,t);
	   	        }
		}
	}
return 0;
}

