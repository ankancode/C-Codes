#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define MAX 3

int wildcard(char *fstr1, char *fstr2, int fcount)
{
 int i, flag = 1;

	for(i=0;i<fcount;i++)
        {
         if( (fstr1[i]==fstr2[i]) || fstr1[i]=='?' || fstr2[i]=='?')
         	{
                 continue;
                }
         else
            {
             flag = 0;
             break;
            }
	}
        printf("in");
 return flag;
}



int main()
{
int t,count=0,count1=0,i,j;
char str1[10],str2[10],c,c1,**results=NULL;
scanf("%d",&t);

if(t>=1 && t<=50)
{
results=malloc(t*sizeof(char*));
for(i=0;i<t;i++)
{
      
         
        
	while( (c=getchar())!='\n' || count<10 )
        {
        	str1[count++] = c;
        }
        str1[count]='\0';
        printf("%d\n",count);
 	
        while( (c1=getchar())!='\n' || count1<count )
        {
         	str2[count1++] = c1;
        }
       
        str2[count1]='\0';
	
        
        results[i] = malloc(MAX*sizeof(char)); 
	
	
        if(count==count1)
        {
       		printf("in");
       		 j = wildcard(str1,str2,count);
        
        	 if(j==1)
        	 {
        		 results[i]="yes";
       		 }
 
        	 else
       		 {
       		         results[i]="no";
     	         }
  	}
        printf("in");
        results[i]="no";
        
}
for(i=0;i<t;i++)
{
printf("%s\n",results[i]);
}

}
return 0;
}
