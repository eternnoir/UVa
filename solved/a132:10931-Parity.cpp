#include<iostream>
#include<climits>
#include<string>
using namespace std;

int main(){
    int x=0;

    while(cin >> x)
{
    if(x==0)
	break;
    string tstring;
    unsigned int y = INT_MIN;
    while(y!=0){
        (x&y)?(tstring.insert(tstring.end(),1,'1'))
	     :(tstring.insert(tstring.end(),1,'0'));
        y=y>>1;
    }
    int answer=0;
    for(int i=0;i<tstring.size();i++)
    {
	if(tstring[i]=='1')
	answer++;

    }
    string t=tstring;
    for(int i=0;i<t.size();i++)
    {
	if(t[i]=='0')
	tstring.erase(tstring.begin());
	else 
	break;
    }
    cout<<"The parity of "<<tstring<<" is "<<answer<<" (mod 2)."<<endl;
}

    return 0;
}
