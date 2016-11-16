#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(void)
{
	long unsigned int t,i,len_min=1,current_size,len1,len2;
	char *l1,*l2;
	scanf("%lu",&t);
	if(t<=100000)
	{
		for(i=0;i<t;i++)
		{
			l1=malloc(len_min);
			
			current_size=len_min;	

			if(l1!=NULL)
			{
				int c=EOF;
				unsigned int j=0;
				while( c=getchar()!='\n' && c!=EOF  )
				{
					l1[j++]=(char)c;

					if(j==current_size)
					{
						current_size = j+current_size;
						l1=realloc(l1,current_size);
					}
				}
				l1[j] = '\0';
				len1=strlen(l1);
                                printf("1st");
			}
     			
			
                        l2=malloc(len1);
                        
              		if(l2!=NULL)
             	        {
                		int d=EOF;
				unsigned int k=0;
				while( ( d=getchar() ) != '\n' && d!=EOF )
                      	        {
					l2[k++]=(char)d;
   				
 					
				}
				l2[k]='\0';
				len2=strlen(l2);
                                printf("2nd");
			}

                }
	}
 printf("%s\n",l1);
 printf("%s\n",l2);
 return 0;
}

