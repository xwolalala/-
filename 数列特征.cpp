#include <stdio.h>
#include <iostream>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int *a=(int*)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	int max=a[0],min=a[0],s=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
		s=s+a[i];
	}
	cout<<max<<endl;
	cout<<min<<endl;
	cout<<s<<endl;
}
