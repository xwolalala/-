#include <stdio.h>
#include <iostream>
using namespace std;

void Binary (int n)
{
	int a[5]={0,0,0,0,0};
	int i=0;
	while((n/2!=0)||(n%2!=0))
	{
		a[i]=n%2;
		n/=2;
		i++;
	}
	for(int j=4;j>0;j--)
		cout<<a[j];
	cout<<a[0]<<endl;
}

int main ()
{
	for(int i=0;i<32;i++)
		Binary (i);
	return 0;
}
