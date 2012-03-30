/*-----------------------------------------------//
 * 2012/03/30
 *
 *
 * http://zerojudge.tw/ShowProblem?problemid=a111
 *
 *
 *
 *
 */


#include <iostream>

using namespace std;

int main(int a)
{
	int num;
	while(cin>>num)
	{
		if(num ==0)
		break;	
		int total=0;
		for(int i=0;i<num;i++)
		{
			total = total + (i+1)*(i+1);
		}
		cout<<total<<endl;
	}


} 
