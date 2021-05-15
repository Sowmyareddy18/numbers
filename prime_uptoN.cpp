#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
	int i,j,count;
	for(i=2;i<=num;i++)
	{
		count=0;
		for(j=2;j*j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==0)
		{
			cout<<i<<" ";
		}
	}
	return 0;
}
