#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 
int main(void)
{
double p;
long long int m,t,i=0,j,l,k,index,w;
long double arr[100005],chef[100005],c,f,max,required,pat,max2;
long double current_amt;
scanf("%lld",&t);
 
while(t--)
{
scanf("%lld %lf",&m,&p);
current_amt=pow(10,9);
l=m-1;
i=0;
j=1;
max=0;
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
 //printf("%lf",p);
 current_amt = current_amt * p;
 arr[i] = current_amt; 
 k=j-1;
 w=j;
 //printf("%ld\n",j);
/* if((j%2)==1)
 {
  chef[k]=arr[k];
  chef[j]=arr[k]-arr[j];
   if(max<chef[k] && k!=0)
   {
    max =chef[k];
    index=k;  
   } 
   if(max<chef[j])
   {
   max=chef[j];
   index=j;
   }*/
//printf("%lld\n",w);
if(w%2==0)
      {
        required=arr[w-1]-arr[w];
        
        if(max2<required )
          {
           max2= required;
          }
      //printf("%Lf\n",max2);
      }
 if(pat>max2)
{
max2=pat;
}
 
 
//}
 
 
 
 
 
 j++;
  
}
--j;
 
//printf("%Lf\n",max2);
 
//printf("%ld\n",j);
//printf("%Lf\n",arr[j]);
 if(arr[j]!='\0')
 {
  chef[j]=arr[j];
  if(max<chef[j])
  {
   max=chef[j];
   index=j;
  }
 }
 
 
c=pow(10,9)-max2;
f=max2;
 
 
 
//printf("%Lf\n",max);
 
/*if(l==0)
{
c=chef[0];
f=0;
}
else
{  
   if(p>=0.5)
   {
   c=chef[index];
   f=arr[index-1]-chef[index];
   }
   else
   {
   c=arr[index-1]-chef[index];
   f=chef[index];
   }
  }*/
 
/*for(i=0;i<=l;i++)
{
 printf("%Lf %Lf\n",arr[i],chef[i]);
}*/
 
 printf("%.2Lf  %.2Lf\n",c,f);
 
 
 
}
return 0;
}
