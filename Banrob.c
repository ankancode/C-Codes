#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
double p;
long long int m,t,i=0,j,l,k,index;
long double arr[100005],chef[100005],c,f,max;
long double current_amt;
scanf("%ld",&t);

while(t--)
{
scanf("%ld %lf",&m,&p);
current_amt=pow(10,9);
l=m-1;
i=0;
if(i==0)
{
 arr[i]=current_amt;
}
for(i=1;i<=l;i++)
{
 //printf("%lf",p);
 current_amt = current_amt * p;
 arr[i] = current_amt; 
}

for(j=1;j<=l;j=j+2)
{
 k=j-1;
 chef[k]=arr[k];
 chef[j]=arr[k]-arr[j];
}
 j=j-1;
 if(arr[j]!='\0')
 {
  chef[j]=arr[j];
 }

for(i=1;i<=l;i++)
{
if(max<chef[i])
{
 max=chef[i];
 index=i;
}
}
 
if(l==0)
{
c=chef[0];
f=0;
}
else
{
   c=chef[index];
   f=arr[index-1]-chef[index];
  }

/*for(i=0;i<=l;i++)
{
 printf("%Lf %Lf\n",arr[i],chef[i]);
}*/

 printf("%.2Lf  %.2Lf\n",c,f);



}
return 0;
}
