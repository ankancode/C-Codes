#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void dotask(long int c,long int d)
{

}



int main(void)
{

long unsigned int a,b,c;
int t,i;
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%lu %lu %lu",&a,&b,&c);
if(a>=c || b>=c)

{
	if(a>b)
                {
		dotask(a,b);
                }	
        else
                {
                dotask(b,a); 
                }
        
}

}
return 0;
}
