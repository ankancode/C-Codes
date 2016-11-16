#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
{

int t,n,k,j,i,words;
char dic[100][100],phrase[100][100],arr[100][100];
char reg[3]="yes";

scanf("%d\n",&t);

while(t--)
{

	scanf("%d %d\n",&n,&k);

	for(i=0;i<n;i++)
	{
	 fgets(dic[i],100,stdin);
        // fputs(dic[i],stdout);
	}
	//printf("\n");


	for(i=0;i<k;i++)
		{
		scanf("%d",&words);
                printf("%d",words);
		for(j=0;j<words;j++)
		{
			scanf("%100s\n", phrase[j]);
                        //fputs(phrase[j],stdout);
                        //printf("\n");
                        
 			for(l=0;l<n;l++)
 			{
                         
    			printf("hello");
   				 if(strcmp(dic[l],phrase[j])==0 && strcmp(arr[l],reg)==1)
   				 {
   				  strncpy(arr[l], "yes", 100);
   				 }
                        k++;
    
 			}
		}

		}
printf("out");
	for(i=0;i<n;i++)
	{
		 fputs(arr[i],stdout);
 //printf("in");
	}
}

return 0;

}
