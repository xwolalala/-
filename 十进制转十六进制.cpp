#include <stdio.h>
#include <iostream>
using namespace std;
int main ()
{
	int n;
	int i=0;
	int a[99];
	char b;
	cin>>n;
	if(n==0)
		cout<<"0";
	else
	{
		while(n/16!=0||n%16!=0)
	{
		a[i]=n%16;
		n=n/16;
		i++;
	}
	for(i=i-1;i>=0;i--)
	{
		if(a[i]<10)
			cout<<a[i];
		else
		{
			b='A'+(a[i]-10);
			cout<<b;
		}
	}
	}
	return 0;
}
