#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	int n,e;
	cin>>n>>e;
	int a[102][1002]={0};
	int i,j,p,q;
	for(i=1;i<=e;i++)
	{
		cin>>p>>q;
		a[p][i]=1;
		a[q][i]=-1;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=e;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}