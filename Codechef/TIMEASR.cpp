#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float a;
        cin>>a;
        float hours=0;
        float min=0;
        while(hours<360)
        {
            min=0;
            while(min<360)
            {
                if(fabs(fabs(hours-min)-a)<=(float)1/120||fabs(fabs(360-fabs(hours-min))-a)<=(float)1/120)
                {
                    int h=floor(hours/30);
                    int m=floor(min/6);
                    if(h<10&&m<10)
                        printf("0%d:0%d\n",h,m);
                    else if(h<10&&m>=10)
                        printf("0%d:%d\n",h,m);
                    else if(h>=10&&m<10)
                        printf("%d:0%d\n",h,m);
                    else if(h>=10&&m>=10)
                        printf("%d:%d\n",h,m);
                }
                 min+=6;
                 hours+=0.5;
            }
 
        }
 
    }
}
