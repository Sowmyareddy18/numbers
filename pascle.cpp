#include<bits/stdc++.h>
using namespace std;
int main()
{
	int p[20][20];
//	int a,sum=0;
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
/*
1
1       1
1       2       1
1       3       3       1
1       4       6       4       1
1       5       10      10      5       1

--------------------------------*/

	/*for(int i=0;i<=5;i++)
	{
		for(int j=0;j<=5;j++)
		{
			p[i][0]=1;
		}
	}
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			p[i][j]=p[i-1][j]+p[i-1][j-1];
		}
	}
	for(int i=0;i<=5;i++)
	{
		for(int j=0;j<=5;j++)
		{
			cout<<p[i][j]<<"\t";
		}
		cout<<endl;
	}*/
/*
1       0       0       0       0       0
1       1       0       0       0       0
1       2       1       0       0       0
1       3       3       1       0       0
1       4       6       4       1       0
1       5       10      10      5       1

--------------------------------
cout<<"enter the row number\t";
cin>>a;
int i=a;
for(int j=0;j<=5;j++)
	{
		sum=sum+p[i][j];
	}
	cout<<sum;
}*/
