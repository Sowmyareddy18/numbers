#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum;
	cin>>n;
	if(n%9==0)
	{
		sum=9;
	}
	else
	{
		sum=n%9;
	}
	cout<<sum;
}
