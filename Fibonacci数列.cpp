//Fibonacci数列 （运行超时了QAQ....)
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
#define mod 10007

int main ()
{
	int n;
	cin>>n;
	int i=1,j=1,k;
	n=n-2;
	while(n--)
	{
		k=(i+j)%mod;
		i=j;
		j=k;
	}
	cout<<k<<endl;
	return 0;
}