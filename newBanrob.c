#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{

double p;
long long int m,t,i=0,j,l,k,w,flag=1;
long double arr[100002],chef[100002],c,f,required,pat,max2;
long double current_amt;

scanf("%lld",&t);

while(t--)
{
scanf("%lld %lf",&m,&p);
current_amt=pow(10,9);
l=m-1;
i=0;
j=1;
c=0;
f=0;
max2=0;
arr[0]=current_amt;

if(m%2==0)
{
pat= current_amt * pow(p,l);
}
else 
{
pat=0;}

for(i=1;i<=l;i++)
{
 
 current_amt = current_amt * p;
 arr[i] = current_amt; 

 w=j;

if(w%2==0 && flag==1)
      {
        flag=0;
        required=arr[w-1]-arr[w];
        
        if(max2<required )
          {
           max2= required;
           flag=1;
          }
      }

if(w%2==0 && flag==0)
{
break;
}
 j++;
  
}

 if(pat>max2)
{
max2=pat;
}



c=pow(10,9)-max2;
f=max2;





 printf("%.2Lf  %.2Lf\n",c,f);



}
return 0;
}
