#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,count=0;
	cin>>n;
	for(i=2;i<=sqrt(n)+1;i++)
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
