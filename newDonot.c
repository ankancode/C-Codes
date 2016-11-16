#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void merge(long long int arr[],long long int l,long long int m,long long int r);
void mergesort(long long int arr[],long long int l,long long int r)
{

 if(l<r)
  {
   long long int m=(l+r)/2;
   mergesort(arr,l,m);
   mergesort(arr,m+1,r);
   merge(arr,l,m,r);
  }
}

void merge(long long int arr[],long long int l,long long int m,long long int r)
{

 int i,j,k;
 int n1 = m-l+1;
 int n2 = r-m;
 int L[n1],R[n2];

 for(i=0;i<n1;i++)
  L[i]=arr[l+i];
 for(j=0;j<n2;j++)
  R[j] = arr[m+1+j];

 i=0;
 j=0;
 k=l;
 while(i<n1 && j<n2)
 {
  if(L[i]<=R[j])
  {
   arr[k]=L[i];
   i++;
  }
  else{
    arr[k]=R[j];
    j++;
    }
    k++;
 }
 while(i<n1)
 {
  arr[k]=L[i];
  i++;
  k++;
 }
 while(j<n2)
 {
  arr[k]=R[j];
  j++;
  k++;
 }
}


int main(void)
{

int t,flag=1;
long long int n,m,i=0,j=0,temp,arr[20000],k;

scanf("%d",&t);

while(t--)
{

scanf("%lld %lld\n",&n,&m);

for(i=0;i<m;i++)
{
scanf("%lld",&arr[i]);
}

mergesort(arr,0,m-1);
/*for(i=0;i<m;i++)
{
printf("%lld\n",arr[i]);
}*/

 k = m-1; 
 j = 0;

for(i=1;i<=k;i++)
{
 if(arr[j]!=0)
 {
  arr[j]--;
 }
 else
 {
  k=k-1;
  ++j;
  arr[j]--;
 }
}

j =0;

printf("%lld\n",k);
}
return 0;
}
