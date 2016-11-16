#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void printarray(int arr[], int len);

void areall9(int arr[], int len);

void nextpalindrome(int arr[], int len )
{
	int i,j,flag=1;

        mid = len/2;
	if(len%2==1)
	{        
		i = mid-1;
		j = mid;
	}
        else
	{
		i = mid-1;
		j = mid+1;	
	}

        while(i>=0)
	{
				
		if(arr[i]>=arr[j])
			{
				arr[j]=arr[i];	
				i++;
				j++;		
			}
        	else
			{
				while(i>=0)
					{
						if(len%2==0)
							{
								i = mid-1;
								j = mid+1;
                                                                arr[i] = arr[i] + 1;
  								carry = arr[i]/10;
                                                                arr[i] = arr[i]%10;
								arr[j] = arr[i];
 								flag = 0;
							}
                                                 i--;
						 j++;
                                        }		
	
			}
		
		

	}
        

int main(void)
{
  unsigned int len_max=1,len1,len2;
  unsigned int current_size=0;
  int *pStr=malloc(len_max);
  
  current_size=len_max;
  
  if(pStr!= NULL)
  {
  	 int c=EOF;
   	 unsigned int i=0;
   
   	while(( c=getchar() ) != '\n' && c!=EOF)
   	{
      		pStr[i++]=c;
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

  nextpalindrome(pstr,len1);
