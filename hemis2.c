#include <iostream>
#include <string>
#include <cstring>
using namespace std;

long int combinationUtil(long int arr[], long int n, long int r, long int index, long int data[], long int i)
{
    long int mul=1,s;
    if (index == r)
    {
        for (long int j=0; j<r; j++){
        
        mul = mul*data[j];
        
        }

        return mul;
    }
 
   
    if (i >= n)
        return 0;
 
    data[index] = arr[i];
    s = combinationUtil(arr, n, r, index+1, data, i+1) + combinationUtil(arr, n, r, index, data, i+1);
    
    return s;
    
}

 

int main() {
   
    long int upper,lower,c,u,l,reach,i,j,t,ans,new_arr[100002],u_arr[100002],l_arr[100002],u_max,l_max,data[100002],check,count,sub_seq;
   
  
        cin>>upper>>lower>>c;
   for(i=0;i<upper;i++)
        {
        cin>>u;
        u_arr[u]++;
        
        if(u>u_max)
            {
            u_max=u;
        }
    }
    
   for(i=0;i<lower;i++)
        {
        cin>>l;
        l_arr[l]++;
       
       if(l>l_max)
           {
           l_max=l;
       }
    }
   
    if(u_max>l_max)
        {
        reach=l_max;
    }
    else{
        reach=u_max;
    }
    
    for(i=0;i<=reach;i++)
        {
        u_arr[i] = u_arr[i]*l_arr[i];
    }
     
    for(i=0;i<=reach;i++)
        {
        if(u_arr[i]!=0)
            {
            new_arr[t] = u_arr[i];
            t++;
        }
    }
    
    for(i=1;i<=c;i++)
        {
            ans = combinationUtil(new_arr,reach,i,0,data,0);
        cout<<ans<<" ";
        }
        
        sub_seq = 1;
        ans = 0;
        
    
    
    
    
   return 0;
}
