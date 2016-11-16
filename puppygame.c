#include<stdio.h>
#include<stdlib.h>
int t=0,i=0,a=0,b=0,left=0,k,n;
char **results=NULL;

int task(int a1,int b1)
{
 	if((a1%2)==0 || (b1%2)==0)
	{
	  return 0;	
	}
        
       if((a1%2)!=0 && (b1%2)!=0)
        {
         return 1;
        }
      
  
 } 

int main(void)
{

scanf("%d",&t);
if(t>=1 && t<=1000)
{
results = malloc(t*sizeof(char*));
	 for(i=0;i<t;i++)
 	{    
              
        scanf("%d %d",&a,&b);
  		if(a>=1 &&  a<=10000 && b>=1 && b<=10000)
  		{
                        
   			k=task(a,b);
                        results[i]=malloc(6*sizeof(char));
   			if(k==0)
   	        		results[i]="Tuzik";
   	      		else
 		    	        results[i]="Vanka";
 		   
 		 } 
 	}

for(i=0;i<t;i++)
{
printf("%s\n",results[i]);
}
}
return 0;
}
