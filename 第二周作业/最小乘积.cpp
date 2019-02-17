#include <iostream>
#include <algorithm>
using namespace std;
bool compare (int a,int b)
{
	return (a>b);
}
int main ()
{
	int m,n,sum,i,j;
	cin>>m;
	for(j=0;j<m;j++)
	{
		cin>>n;
		sum=0;
		int a[10];
		int b[10];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			cin>>b[i];
		}
		sort(a,a+n);
		sort(b,b+n,compare);
		for(i=0;i<n;i++)
		{
			sum=sum+a[i]*b[i];
		}
		cout<<sum<<endl;
	}
		return 0;
}

