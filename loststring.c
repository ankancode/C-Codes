#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{

int t,k,j=0,flag=1;
char arr[2001]="";
long int n,query[30][2],l,temp1,temp2,i;

scanf("%d",&t);

while(t--)
{

l=0;


scanf("%ld %d\n",&n,&k);


for(i=0;i<k;i++)
{
scanf("%ld",&query[i][j]);
scanf("%ld",&query[i][j+1]);
}

for(i=0;i<k;i++)
{
 temp1 = query[i][j];
 temp2 = query[i][j+1];
 if(arr[temp1]=='\0')
 {
  arr[temp1]='(';
 }
 if(arr[temp2]=='\0')
 {
  arr[temp2]=')';
 }
}



for(i=0;i<n;i++)
{

 if(arr[i]=='\0' && flag==1)
 {
  arr[i]='(';
  
  flag=0;
  
 }
 
else{
 if(arr[i]=='\0' && flag==0)
 {
  arr[i]=')';
  
  flag=1;
 }
}
}


for(i=0;i<n;i++)
{
printf("%c",arr[i]);
arr[i]='\0';
}

printf("\n");

}

return 0;
}
