#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

long signed int fibonum(long signed int n)
{
 long signed int prev=0,current=1,count=0,temp;
  
  while(count!=n){

        temp = current;
        current = current +  prev;
        prev=temp;
        count++;

  }
  
return current;
  
}




int main(void)
{
long signed int t,i=0,j,a,l,k;
long signed int pro=1, *arr;
scanf("%ld",&t);
arr=malloc(t*sizeof(long signed int));
	if(t>=1 && t<=pow(10,5))
	{       
                
		do
		{
                      
                       
 			
			scanf("%ld %ld",&l,&k);
			
			if(l>=1 && l<k && k<=pow(10,5))
       			{
	 			for(j=l;j<k;j++)
	 			{
					a=fibonum(j);
					if(a%4==1 || a%4==3)
                                        {
					pro *=a;
                                        
                                        }
				}
      	       		 }
                        
                 arr[i] = pro;
                 ++i;
                
                 }while(i<t);
                 
                 
                 
         }
for(i=0;i<t;i++)
{
	printf("%ld\n",(arr[i]%4));
}


return 0;

}



