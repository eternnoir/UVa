#include<cstdio>
#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int times,a,b,x,y;

    cin>>times;
    for(int i=0; i<times; i++)
    {
        scanf("%d %d",&a,&b);

        if((abs(a-b)%2)!=0||(a<b))
            cout<<"impossible"<<"\n";
        else
        {
            x=(abs(a-b)/2);
            y=abs(a-x);
            if(y>x);
            swap(x,y);
            cout<<x<<" "<<y<<"\n";
        }
    }


}
