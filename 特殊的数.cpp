#include <stdio.h>
#include <iostream>
using namespace std;
int main ()
{
	int a,b,c,s;
	for(int i=100;i<=999;i++)
	{
		a=i/100;
		b=(i-100*a)/10;
		c=i%10;
		s=a*a*a+b*b*b+c*c*c;
		if(s==i)
			cout<<i<<endl;
	}
}