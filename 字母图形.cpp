#include <stdio.h>
#include <iostream>
using namespace std;
int main ()
{
	int m,n;
	cin>>n>>m;
	char *a=(char*)malloc(m*sizeof(char));
	for(int j=0;j<m;j++)
		a[j]='A'+j;
	for(int i=1;i<=n;i++)
	{
		for(j=i;j>1;j--)
			cout<<a[j-1];
		for(j=1;j<=m-i+1;j++)
			cout<<a[j-1];
		cout<<endl;
	}
}
