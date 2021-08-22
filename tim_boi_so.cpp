#include <bits/stdc++.h>
using namespace std;
bool stop;
int k,n;
int a[30];
long long res=1e18;
void Try(int i)
{
	for(int j=0;j<2;j++)
	{
		a[i]=j;
		if(i==k)
		{
			long long s=0;
			for(int i=1;i<=k;i++) s=s*10+a[i];
			s*=9;
			if(s%n==0&&s>=n)
			{
				res=min(s,res);
				stop=1;
			}
		}
		else Try(i+1);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		k=1;
		stop=0;
		res=1e18;
		while(!stop)
		{
			Try(1);
			k++;
		}
		cout<<res<<"\n";
	}
	return 0;
}