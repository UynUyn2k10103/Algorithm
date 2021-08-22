#include <bits/stdc++.h>
#define ll long long
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
using namespace std;
const long long oo=1e9+7;
int a[1000][1000];
int m,n;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t,m,n,ans;
	cin>>t;
	while(t--)
	{
		ans=0;
		cin>>m>>n;
		fori(i,1,m+1)
		{
			fori(j,1,n+1) 
			{
				cin>>a[i][j];
				if(a[i][j]) a[i][j]=a[i-1][j]+1;
			}
			stack <ll> k;
			int left[1005];
			int right[1005];
			for(long long j=1;j<=n;j++)
	        {
	            while(!k.empty()&&a[i][j]<=a[i][k.top()]) k.pop();
	            left[j]= k.empty()? 0: k.top();
	            k.push(j);
	        }
	        while (!k.empty()) k.pop();
	        for(long long j=n;j>0;j--)
	        {
	            while(!k.empty()&&a[i][j]<=a[i][k.top()]) k.pop();
	            right[j]= k.empty()? n+1: k.top();
	            k.push(j);
	        }
	        for(long long j=1;j<=n;j++) ans=max(ans,min(a[i][j],right[j]-left[j]-1));
		}
		cout<<ans<<"\n";
	}


	return 0;
}