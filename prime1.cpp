#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count;
	cin>>n;
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
		   count++;
             cout<<"not prime";
             break;
		}
	}
	if(count==0)
	cout<<"prime";
	return 0;
}
