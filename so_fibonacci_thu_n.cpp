#include <bits/stdc++.h>
using namespace std;
const long long oo=1e9+7;

long long f[2][2],i[2][2];

void nhanmatran(long long a[2][2],long long b[2][2])
{
	long long x,y,z,t;
	x=a[0][0]*b[0][0]+a[0][1]*b[1][0];
	y=a[0][0]*b[0][1]+a[0][1]*b[1][1];
	z=a[1][0]*b[0][0]+a[1][1]*b[1][0];
	t=a[1][0]*b[0][1]+a[1][1]*b[1][1];
	f[0][0]=x%oo; f[0][1]=y%oo;
	f[1][0]=z%oo; f[1][1]=t%oo;
}

void Poww(long long f[2][2],long long n)
{
	if(n<=1) return;
	Poww(f,n/2);
	nhanmatran(f,f);
	if(n%2==1) nhanmatran(f,i);
}

void results()
{
	long long n;
	f[0][0]=f[0][1]=f[1][0]=i[0][0]=i[0][1]=i[1][0]=1;
	f[1][1]=i[1][1]=0;
	cin>>n;
	if(n==0||n==1) cout << n;
	else if(n==2) cout<<"1";
	else 
	{
		Poww(f,n-1);
		cout<<f[0][0];
	}
	cout<<"\n";
}

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin >> t;
	while (t--) results();
	return 0;
}