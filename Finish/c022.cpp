#include<iostream>
#include <math.h>
#include <queue>
using namespace std;
int main()
{
    int times,a,b;
    queue<int> que;
    cin>>times;
    for(int i=0; i<times; i++)
    {
        int tmp=0;
        scanf("%d %d",&a,&b);
        for(int k=a; k<=b; k++)
        {
            if(k%2!=0)
            tmp=tmp+k;

        }
        que.push(tmp);
    }
    int j=1;
    while(!que.empty())
    {
        cout<<"Case "<<j<<": "<<que.front()<<"\n";
        que.pop();
        j++;
    }

    return 0;
}
