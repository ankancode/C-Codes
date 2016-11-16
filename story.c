#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int compare(char *first ,int length1 ,char *second, int length2)
{
char *temp1=NULL,*temp2=NULL,*temp=NULL;
int k=0,j=0,i;
char **events=NULL;
events=malloc(sizeof(char *));
temp1=first;
temp2=second;
while(*temp2!='\0')
{
if(*temp1!=*temp2)
	{
 		*temp1++;
 
 	}
else
	{       
                temp=temp2;
	 	do{
 			events[k][j++]=*temp1;
 			events[k]=realloc(events,j);
 			*temp2++;
 			*temp1++;
 			
		 }
 		while(*temp1==*temp2 || *temp1!='\0' || *temp2!='\0' );
                events[k][j]='\0';
                j=0;
                if(*temp1=='\0' && *temp2!='\0')
                 {
                  temp1=first;
                  temp2=temp+1;
                  
                 }
                if(*temp1!='\0' && *temp2!='\0')
                 {
                  temp2=temp;
                 
                 }
	}

 k++;
 events=realloc(events,k*sizeof(char *));
 
}

events[k]=NULL;
for(i=0;events[i]!=NULL;i++)
{
	printf("%s\n",events[i]);
}
return 0;
}


int main(void)
{
  unsigned int len_max=128,len_min=1,len1,len2;
  unsigned int current_size=0;
  char *pStr=malloc(len_max);
  char *qStr=malloc(len_min);

  current_size=len_max;
  
  if(pStr!= NULL)
  {
  	 int c=EOF;
   	 unsigned int i=0;
   
   	while(( c=getchar() ) != '\n' && c!=EOF)
   	{
      		pStr[i++]=(char)c;
      		if(i == current_size)
     	        {	
      	 		current_size = i+len_max;
       			pStr = realloc(pStr, current_size);
      		}
   	}	
   
   pStr[i]='\0';
   len1=strlen(pStr);
   printf("\n\n");
  }
   
  current_size = len_min;
  if(qStr!= NULL) 
  {
 	  int d=EOF;
 	  unsigned int j=0;
 	  while(( d=getchar() ) != '\n' && d!=EOF && j<=len1-1)
 	  {
 		     qStr[j++]=(char)d;
 		     if(j == current_size )
        	     {
      	        	  current_size= j+len_min;
       	  	       	qStr = realloc(qStr, current_size);
    		     } 
          }
   qStr[j]='\0';
   len2=strlen(qStr);

   printf("\n\n");
   
  }     
 
 compare(pStr,len1,qStr,len2);
 return 0;
}
