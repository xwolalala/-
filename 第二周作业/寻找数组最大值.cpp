#include <stdio.h>
#include <iostream>
using namespace std;
int main ()
{
	int n,a[100],max,local;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	max=a[0];
	local=0;
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			local=i;
		}
	}
	cout<<max<<" "<<local;
	return 0;
}
	