#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,temp,r,rev=0;
	cin>>n;
	temp=n;
	while(n)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(rev==temp)
	{
		cout<<"palindrome";
	}
	else
	cout<<"not a palindrome";
	return 0;
}
