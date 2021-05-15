#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	cout<<1<<" ";
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			cout<<i<<" ";
			cout<<n/i<<" ";
		}
	}
	cout<<n;
	return 0;
}
