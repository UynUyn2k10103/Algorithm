#include <bits/stdc++.h>
#define ll long long
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
using namespace std;
ll n,k;
ll gap(int n,ll k)
{
	long long x=pow(2,n-1);
	if(k==x) return n;
	if (k<x)  return gap(n-1,k);
	return gap(n-1,k-x);
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		cout<<gap(n,k)<<"\n";
	}


	return 0;
}