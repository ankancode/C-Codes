#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	long long int t,n,prev,count=0,flag=0,l,inc=2;
        
        scanf("%lld",&t);
        while(t--)
	{
            scanf("%lld",&n);
            inc = 2;
            count = 0;
            flag = 0;
            while(n--)
            {
             	scanf("%lld",&l);
                if(flag==0)
                {
                 prev=l;
                 count++;
                 flag=1;
                }
                else
		{
		 if(l>=prev)
                  {
                   count=count+inc;
                   inc++;
                   prev=l;
                  }
                 else{
                      prev=l;
                      count++;
                      inc=2;
                     }
                }
            }
        printf("%lld\n",count);

        }
   return 0;
}
           

