#include<iostream>
#include <math.h>
#include <queue>
using namespace std;
int main()
{
    int times,a,b;
    queue<char> que;
    cin>>times;
    for(int i=0;i<times;i++)
    {
        scanf("%d %d",&a,&b);
        if(a<b)
        que.push('<');
        if(a>b)
        que.push('>');
        if(a==b)
        que.push('=');

    }
    while(!que.empty())
    {
        cout<<que.front()<<"\n";
        que.pop();
    }
    return 0;

}
