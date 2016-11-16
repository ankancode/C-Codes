#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int t;
long long int arr[1000002][2]={{0}},i=0,j=0,min_s=1000009,max_e=0,diff=0,result=0,n=0,k=0;

int main(void)
{

//int t;
//long long int arr[1000002][2]={{0}},i=0,j=0,min_s=1000009,max_e=0,diff=0,result=0,n=0,k=0;

scanf("%d",&t);

while(t--)
{
	scanf("%lld %lld",&n,&k);
	for(i=0;i<n;i++)
	{
	scanf("%lld",&arr[i][j]);
        scanf("%lld",&arr[i][j+1]);

        if(arr[i][j]<min_s)
	  min_s = arr[i][j];
	if(arr[i][j+1]>max_e)
	  max_e = arr[i][j+1];
        }
        
        diff = max_e - min_s;
        result=0;
        for(i=0;i<n;i++)
   	{
   	 if(diff==k)
	   {
            if(arr[i][j]>min_s)
	      {
               result = result + abs(arr[i][j] - min_s);
	      }
             if(arr[i][j+1]<max_e)
	      {
	       result =result + abs(max_e - (arr[i][j+1]));
	      }
           }
          else
	  {
           if(diff<k)
	   {
	    max_e = min_s + k;
            if(arr[i][j]>min_s)
              {
               result = result + abs(arr[i][j] - min_s);
              }
             if(arr[i][j] < max_e)
              {
               result = result + abs(min_s - (arr[i][j+1])); 
              }
           }
	   else
           {
	    temp = arr[i][j+1] - arr[i][j];
	    }
          }
            
        } 

    printf("%lld\n",result);
}
return 0;
}

         

