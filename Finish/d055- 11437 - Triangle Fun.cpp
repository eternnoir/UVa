//三角形 ABC 的面積 = |AxBy - AyBx + BxCy - ByCx + CxAy - CyAx| / 2



#include<iostream>
#include <math.h>
#include <queue>
using namespace std;
int main()
{
    int times;
    double temp,ax,ay,bx,by,cx,cy;
    int num;
    queue<int> que;

    cin>>times;
    for(int i=0; i<times; i++)
    {
        scanf("%lf %lf %lf %lf %lf %lf",&ax,&ay,&bx,&by,&cx,&cy);
        temp=(ax*by-ay*bx+ bx*cy-by*cx+ cx*ay-cy*ax)/2;
        if(temp<0)
        {
            temp=-temp;
        }
        temp=temp/7;
        temp=temp+0.5;
        num=(int)temp;
        que.push(num);
    }


    while(!que.empty())
    {
        cout<<que.front()<<"\n";
        que.pop();

    }

    return 0;
}

