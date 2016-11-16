    #include <stdio.h>
    typedef long long int ll;
    int main() {
        int tc;
        scanf("%d",&tc);
        ll s, ans, l, r,b,m;
        while(tc--)
        {
            scanf("%lld",&s);
            l=1,r=500000,b=1;
            while(l<=r)
            {
                m=(l+r)/2;
                ans = (m*(m+1))*((2*m)+1)/6;
               
                if (ans<=s)
                {
                    l=m+1;
                    b=m;
                }
                else
                {
                    r=m-1;
                }
            }
            printf("%lld\n",b);
        }
    	return 0;
    } 
