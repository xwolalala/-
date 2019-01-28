#include <stdio.h>
#include <iostream>
using namespace std;

int main ()
{
	int a[34][34];
	int i,j,n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		a[i][0]=1;
		a[i][i]=1;
	}
	for(i=2;i<n;i++)
	{
		for(j=1;j<=i-1;j++)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	if(n==1)
		cout<<"1";
	else if(n==2)
	{
		cout<<"1"<<endl;
		cout<<"1"<<" "<<"1";
	}
	else
	{
		cout<<"1"<<endl;                      
		cout<<"1"<<" "<<"1"<<endl;
		for(i=2;i<n;i++)
		{
			for(j=0;j<=i;j++)
				cout<<a[i][j]<<" ";
			cout<<endl;
		}
	}
	return 0;
}

