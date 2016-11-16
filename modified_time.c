#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  long int t,i1,i2,j,s1,s2;
    double a,b,min1,temp1,temp2,sec1,sec2,min2,hour_angle_1,hour_angle_2,min_angle_1,min_angle_2,angle_1,angle_2;
    cin>>t;
    while(t--)
        {
        cin>>a;
        b=(360-a);
        min1 = a/5.5;
        min2 = b/5.5;
        
         hour_angle_1 =  min1/2;
                    min_angle_1 = 6*min1; 
            angle_1 = abs(hour_angle_1 - min_angle_1);
          //  cout<<hour_angle_1<<"__"<<min_angle_1<<"__"<<angle_1<<"__"<<min1<<"\n";
         if(angle_1<(0+0.0083) && angle_1>(0-0.0083))
            {
                cout<<"00:00"<<"\n";
                
            }
      //  cout<<min<<"\n";
        i1=min1;
       i2=min2;
      //  cout<<i<<"\n";
       temp1 = min1-i1;
       temp2 = min2-i2;
       sec1 = nearbyint(temp1 * 60);
       sec2 = nearbyint(temp2 * 60);
        
        
       // cout<<temp<<"\n";
    //   cout<<sec1<<"\n";
        //sec = sec
    //  cout<<sec2;
        for(j=1;j<12;j++)
            {
            
            
            i1 = (i1 + 5)%60;
            sec1 = sec1 + 27.27;
            if(sec1>=60)
                {
                i1++;
                s1 = 60;
                sec1 = sec1 - s1;
            }
           //  i1 = min1; 
         /*   if(min1>60)
                {
                min1 = min1-i1;
            }*/
                hour_angle_1 = (30*j) + i1*0.5 + ((0.5/60)*sec1) ;
                    min_angle_1 = (6*i1) + (0.1*sec1); 
          /*  if(hour_angle_1>=360 || min_angle_1>=360)
                {
                hour_angle_1 = hour_angle_1 - 360;
                min_angle_1 = min_angle_1 -360; 
                angle_1 = abs(hour_angle_1 + min_angle_1);
            }*/
           // else
                {
            angle_1 = abs(hour_angle_1 - min_angle_1);
            }
            if(angle_1>180)
                {
                angle_1 = 360-angle_1;
            } 
            cout<<hour_angle_1<<"__"<<min_angle_1<<"__"<<angle_1<<"\n";
          //  cout<<hour_angle_1<<min_angle_1<<"\n";
             if(angle_1<(a+0.0083) && angle_1>(a-0.0083))
            {
                printf("%02ld:%02ld \n",j,i1);
                 cout<<"hi";
                
            }
            
            
            if(a!=0)
                {
           i2 = (i2 + 5)%60;
            sec2 = sec2 + 27.27;
            if(sec2>=60)
                {
                i2++;
                s2 = 60;
                sec2 = sec2 - s2;
            }
                 hour_angle_2 = (30*j) + i2*0.5 + ((0.5/60)*sec2) ;
                    min_angle_2 = (6*i2) + (0.1*sec2); 
                
                  if(hour_angle_2>=360 || min_angle_2>=360)
                {
                hour_angle_2 = hour_angle_2 - 360;
                min_angle_2 = min_angle_2 -360; 
                angle_2 = abs(hour_angle_2 + min_angle_2);
            }
             else
                 {
            angle_2 = abs(hour_angle_2 - min_angle_2);
             }
           if(angle_2>180)
                {
                angle_2 = 360-angle_2;
            } 
            
            
            
            if(angle_1<(a+0.0083) && angle_1>(a-0.0083))
            {
                printf("%02ld:%02ld \n",j,i2);
            }
            }     
                             
            
        }
        
       
    }
    
  return 0;
}
