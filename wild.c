#include<stdio.h>
#include<string.h>

int main()
{

int t,i;
char str1[11],str2[11];
scanf("%d",&t);

while(t--)
{

scanf("%s\n",str1);
scanf("%s\n",str2);

for(i=0;i<strlen(str1);i++)
{
 if( (str1[i]==str2[i]) || str1[i]=='?' || str2[i]=='?')
                 continue;
         else
             break;
}

if(i==strlen(str1))
printf("yes\n");
else
printf("no\n");

}
return 0;
}
