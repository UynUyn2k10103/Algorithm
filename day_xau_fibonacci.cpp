#include <bits/stdc++.h>
using namespace std;
unsigned long long a[93],b[93];
void fibo()
{
	a[0]=1;
	a[1]=1;
	b[0]=1;
	for(int i=2;i<93;i++)
	{
		a[i]=a[i-2]+a[i-1];
		b[i]=b[i-2]+b[i-1];
	}
}
unsigned long long demA(int n,unsigned long long k)
{
	unsigned long long s=0;
	if(k==0) return 0;
	if(k==1&&n<2)
	{
		if(n==0) return b[0];
		if(n==1) return b[1];
	}
	while (k)
	{
		if(k==a[n]) return b[n];
		if(k>=a[n-2])
		{
			s+=b[n-2];
			k-=a[n-2];
			n=n-1;
		}
		else n=n-2;
	}
	return s;
}
int main()
{
	int t;
	cin>>t;
	fibo();
	int n;
	unsigned long long k,b;
	while(t--)
	{
		cin>>n>>k;
		n-=1;
		b=demA(n,k)-demA(n,k-1);
		if(b) cout<<"A\n";
		else cout<<"B\n";
	}
}