#include <stdio.h>
#include <iostream>
using namespace std;
int main ()
{
	long long int n,sum=0;
	int i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	cout<<sum<<endl;
	return 0;
}