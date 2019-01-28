#include <stdio.h>
#include <iostream>
using namespace std;
int main ()
{
	int n,sum;
	cin>>n;
	int *a=(int*)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	int b;
	cin>>b;
	sum=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==b)
		{
			sum++;
			continue;
		}
	}
	cout<<sum<<endl;
	return 0;
}