  #include<stdio.h>
  #include<stdlib.h>
    unsigned long long int i,n=0,counter=0,*p=NULL,trail=0;
    unsigned long long int trailzero(unsigned long long int m)
    	{
    	unsigned long long int j=0,counter2=0;
    	for(j=5;j<=m;j=j*5)
		{
		counter2=counter2+m/j;
		}
        return counter2;   
    	}
    unsigned long int main(void)
    	{
    	
    	scanf("%llu",&i);
            p=(unsigned long long int*)malloc(sizeof(unsigned long long int)*i);
    	for(counter=0;counter<i;counter++)
    		{
    		scanf("%llu",&n);
    		trail=trailzero(n);
                p[counter]=trail;
    		}
            for(counter=0;counter<i;counter++)
                    {
    		printf("%llu\n",p[counter]);
                    }
            return 0;
    	}
     
