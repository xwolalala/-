#include <stdio.h>
#include <iostream>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int a,b,c,d,e,f;
	for(int i=10000;i<=99999;i++)
	{
		a=i/10000;
		b=(i-a*10000)/1000;
		c=(i-a*10000-b*1000)/100;
		d=(i-a*10000-b*1000-c*100)/10;
		e=i%10;
		if(a==e&&b==d&&a+b+c+d+e==n)
			cout<<i<<endl;
	}
	for(i=100000;i<=999999;i++)
	{
		a=i/100000;
		b=(i-a*100000)/10000;
		c=(i-a*100000-b*10000)/1000;
		d=(i-a*100000-b*10000-c*1000)/100;
		e=(i-a*100000-b*10000-c*1000-d*100)/10;
		f=i%10;
		if(a==f&&b==e&&c==d&&a+b+c+d+e+f==n)
			cout<<i<<endl;
	}
	return 0;
}
