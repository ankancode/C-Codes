#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
 int t=0,n=0;
long int arr[1002]={0},num=0,ans=1,max=0,i=0,j=1,l=0;
scanf("%d",&t);

while(t--)
{

scanf("%d",&n);
while(n--)
{
         j=1;
	scanf("%ld",&num);
        
        if(num>max)
	{
        
	max=num;
        }
        
        while(num%2 == 0)
	{
	  num = num/2;	  
	  ++arr[0];
          
        }
        
	for(l=3;l<=sqrt(num);l=l+2)
	{
		while(num%l==0)
                {
		num = num/l;
		arr[j]++;
		}
		
		++j;
	}
        
        if(num>2)
           arr[num]++;
       
}

for(i=0;i<=max;i++)
{       
	if(arr[i]>0)
        {
            
            ans=ans*(arr[i]+1);
            arr[i]=0;
        }

       
}


printf("%ld\n",ans);
ans = 1;
max = 0;
}
return 0;
}
