#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
  unsigned int len_min=1,len1,len2,t,i;
  unsigned int current_size=0;
  char *pStr,*qStr;
  scanf("%d",&t);

  for(i=0;i<t;i++)
  {
   
  pStr=malloc(len_min);
  qStr=malloc(len_min);

  current_size=len_min;
  
  if(pStr!= NULL)
  {
  	 int c=EOF;
   	 unsigned int i=0;
   
   	while(( c=getchar() ) != '\n' && c!=EOF )
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
  printf("%s\n",pStr);
 // printf("%s",qStr);
}     
 
 return 0;
}
