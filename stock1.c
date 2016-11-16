#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{

long int t,stock[22],avg[22],temp,count,r,l,sum;
int n,i;

scanf("%ld\n",&t);

while(t--)
{

 scanf("%d\n",&n);
 
 for(i=0;i<n;i++)
 {
 	 scanf("%ld",&stock[i]);
 }
 
 l=0;
 r=n-1;
 
 while(l<r)
 {
        if(flag==0)
            {
             diff = abs(stock[l] - stock[r]);
             maxdiff[count] =  diff;
             flag=1;
            }	
	
         if(flag==1)
            {
	      diff = abs(stock[l] - stock[r]);
              temp1 = stock[l-1]%2;
 	      temp2 = stock[l+1]%2;	
              if(temp1==0 && temp2==0 )
              	{
		 
		   }     
}

}	 
 }
 

 
