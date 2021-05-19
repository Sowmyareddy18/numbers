#include<bits/stdc++.h>
using namespace std;
int factorial(int a);
int main()
{
	int n,fact;
	cin>>n;
	fact=factorial(n);
	cout<<fact;
}
int factorial(int a)
{
	if(a>1)
	return a*factorial(a-1);
	else
	return 1;
}
