#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,fact=1;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		fact=fact*i;
	}
	int count=0;
	cout<<fact<<endl;
	/*while(fact%10==0)
	{
		count++;
		fact=fact/10;
	}
	cout<<count;*/
	for(int i=5;i<=n;i*=5)
	{
		count=count+(n/i);
	}
	cout<<count;
}
