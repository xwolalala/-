#include <stdio.h>
#include <iostream>
using namespace std;
int main ()
{
	char a[8];
	cin>>a;
	long sum=0;
	int t;
	for(int i=0;a[i];i++)
	{
		if(a[i]<='9')
			t=a[i]-'0';
		else if('A'<=a[i]<='F')
			t=a[i]-'A'+10;
		sum=sum*16+t;
	}
	cout<<sum;
}
	
