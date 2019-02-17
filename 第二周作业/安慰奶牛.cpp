#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

struct node{
	int s,e,w;
}a[100010];

int talk[100010];
int x[100010];

bool compare (node a,node b)
{
	if(a.w<b.w)
		return true;
	else
		return false;
}

int find (int k)//................................找到k最开始的祖先
{
	if(k==x[k])
		return k;
	else
	{
		int t=find(x[k]);
		x[k]=t;
		return t;
	}
}

int main ()
{
	int num,way;
	cin>>num>>way;
	int i,min;
	cin>>talk[1];
	min=talk[1];
	x[1]=1;
	for(i=2;i<=num;i++)
	{
		cin>>talk[i];
		x[i]=i;
		if(min>talk[i])
			min=talk[i];
	}
	for(i=1;i<=way;i++)
	{
		cin>>a[i].s>>a[i].e>>a[i].w;
		a[i].w=2*a[i].w+talk[a[i].s]+talk[a[i].e];
	}
	sort(a+1,a+1+way,compare);
	int sum=0;
	for(i=1;i<=num;i++)
	{
		int g=find(a[i].s);
		int v=find(a[i].e);
		if(g!=v)
		{
			sum=sum+a[i].w;
			x[g]=v;
		}
	}
	cout<<sum+min;
	return 0;
}
