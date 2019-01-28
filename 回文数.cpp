#include <stdio.h>
#include <iostream>
using namespace std;
int main ()
{
	int a,b,c,d;
	for(int i=1000;i<=9999;i++)
	{
		a=i/1000;
		b=(i-a*1000)/100;
		c=((i%100)-i%10)/10;
		d=i%10;
		if(a==d&&b==c)
			cout<<i<<endl;
	}
	return 0;
}