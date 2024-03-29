
#include<iostream>

#include <math.h>
#include<string>
#include<vector>
 using namespace std;
int LCS(string X,string Y)
{
     if (Y.length() > X.length())
        swap(X,Y);
     int m = X.length(),n=Y.length();
     vector< vector<int> > c(2, vector<int>(n+1,0));
     int i,j;
     for (i=1;i<=m;i++)
     {
         for (j=1;j<=n;j++)
         {
             if (X[i-1]==Y[j-1])
                c[1][j]=c[0][j-1]+1;
             else
                 c[1][j]=max(c[1][j-1],c[0][j]);
         }
    	 for (j=1;j<=n;j++)
    		 c[0][j]=c[1][j];
     }
     return (c[1][n]);
}
 int main()
{
    string a,b;
    while(cin>>a>>b)
    {
        cout<<LCS(a,b)<<"\n";
    }
    return 0;
}

