#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{

long int t,stock[22],avg[22],temp,count,r,l,sum;
int n,i;

scanf("%ld",&t);

while(t--)
{
 sum=0;
 count=0;
 
 scanf("%d\n",&n);
 
 for(i=0;i<n;i++)
 {
 	 scanf("%ld",&stock[i]);
     
 	 if(i>=2) {
               //  if(count==0)
              //   {  
  		 if((stock[i-2]%2)==0 && (stock[i]%2)==0)  {

     			 temp=(stock[i-2]-stock[i])/2;

    			  if(avg[count-1]<temp){
      				avg[count]=temp;
     				 }
    			  else  {
         		      avg[count]=stock[i-1];
    			  }
                        //  printf("%ld",avg[count]);
      			 count++;
                        
    		 }
            //     }
            //     else{
            /*     if((avg[count-1]%2)==0 && (stock[i]%2)==0){
                       
                        temp=(avg[count-1]-stock[i])/2;
                        
                        if(avg[count-1]<temp){
                            avg[count]=temp;
                        }
                        else{
                           avg[count]=stock[i-1];
                        }
                        count++;
                 }*/
   	         else{
      		      avg[count]=stock[i-1];
     		      count++;
     		     }
          }
       //  }
  
 }
count--;
 

for(i=0;i<=count;i++)
{
 printf("%ld\n",avg[i]);}

	if(n%2==0){
	r=n/2;
	l=r-1;
	}

	else{
	r=floor(n/2);
	l=r;
	}
	
	r=r-1;
	l=l-1;

	while(l>=0){
	 	if(l==r) {
 	 	l--;
 	 	r++;
         	}
	 	else{
 	 	sum=sum + abs(avg[l]-avg[r]);
 	        }
	}

        printf("%ld\n",sum);

}
 
return 0;

}
