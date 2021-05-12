#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,r,rev=0,even=0,odd=0;
	cin>>n;
	while(n)
	{
		r=n%10;
		n=n/10;
		if(r%2==0)
		even++;
		else
		odd++;
   }
    cout<<"even digits"<<even;
    cout<<"odd digits"<<odd;
    return 0;
}
