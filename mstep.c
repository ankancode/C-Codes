#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
int t,n,i,j,k,x,y;
long long int steps=0,arr[500][500];
scanf("%d",&t);

while(t--)
{

scanf("%d",&n);

for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 {
    scanf("%lld",&arr[i][j]);
     if(arr[i][j]==1)
       {
        x=i;
        y=j;
       }
 }

}
for(k=2;k<=pow(n,2);k++)
{
for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
   {    
	if(arr[i][j]==k)
	{
	steps=steps+(abs(x-i)+abs(y-j));
        x=i;
        y=j;
        break;
        }
   }
 }
}

printf("%lld\n",steps);
steps=0;
}
return 0;
}
