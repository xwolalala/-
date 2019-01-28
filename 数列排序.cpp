#include <stdio.h>
#include <iostream>
using namespace std;

int main ()
{
	int n,temp;
	cin>>n;
	int *a;
	a=(int*)malloc(sizeof(int)*n);
	for(int i=0;i<=n-1;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<=n-2;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<a[n-1];
	return 0;
}
