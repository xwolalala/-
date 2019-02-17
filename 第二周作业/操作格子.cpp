#include <stdio.h>
#include <iostream>
using namespace std;
int main ()
{
	int n,m,i,j,p,q,r,sum,max;
	cin>>n>>m;
	int a[10001];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	while(m--)
	{
		cin>>p>>q>>r;
		if(p==1)
		{
			a[q-1]=r;
		}
		else if(p==2)
		{
			sum=0;
			for(j=q-1;j<r;j++)
			{
				sum+=a[j];
			}
			cout<<sum<<endl;
		}
		else if(p==3)
		{
			max=a[q-1];
			for(j=q;j<r;j++)
			{
				if(a[j]>max)
					max=a[j];
			}
			cout<<max<<endl;
		}
	}
	return 0;
}
