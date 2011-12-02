#include<iostream>
#include <math.h>
#include<string>
using namespace std;
int f(int x)
{
    if(x<=100)
    return f(f(x+11));
    else if(x>100)
    return x-10;
}


int main()
{
    int a;
    while(cin>>a)
    {
        if(a==0)
        break;
        cout<<"f91("<<a<<") = "<<f(a)<<"\n";

    }
    return 0;
}
