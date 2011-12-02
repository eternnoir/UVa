#include<iostream>
#include <math.h>

using namespace std;
int main()
{
    int a,b;
    while(cin>>a)
    {
        b=0;
        if(a==0)
        break;
        b=sqrt(a);
        if(a==(b*b))
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;


    }
    return 0;
}
