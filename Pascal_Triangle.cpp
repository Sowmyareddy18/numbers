#include<bits/stdc++.h>
using namespace std;
int main()
{
	int p[20][20];
	for(int i=0;i<=5;i++)
	{
		for(int j=0;j<=i;j++)
		{
			if(j==0)
			{
			p[i][j]=1;
		    }
			else
			{
			p[i][j]=p[i-1][j]+p[i-1][j-1];
		    }
			cout<<p[i][j]<<"\t";
		}
		cout<<endl;
	}
}
