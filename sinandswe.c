#include<stdio.h>
#include<stdlib.h>

int main()
{

long long int t,s,count=0,i,temp=1,square=1;

scanf("%lld",&t);

while(t--)
{
 square=1;
 temp=1;
 count=0;
 scanf("%lld",&s);
 
 for(i=1;i<=s;i++)
 {
  if(count!=0){
  temp=temp+2;
  square=square+temp;}

  if(square<=s){
  s=s-square;
  count++;
  }
  else
  {
   break;}

 }
 
printf("%lld\n",count);

}
return 0;
}
