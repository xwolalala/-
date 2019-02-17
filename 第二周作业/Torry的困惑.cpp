#include <iostream>
using namespace std;
int main ()
{
	int n,sum=1,flag,num=0;
	cin>>n;
	for(int i=2;num<n;i++)
	{
		flag=0;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=1;
				continue;
			}
		}
		if(flag==0)
		{
			num++;
			sum=sum*i;
		}
	}
	cout<<sum%50000;
	return 0;
}
