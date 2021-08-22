#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t,n,k,i,j,dem;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		int a[k+1],b[k+1];
		dem=0;
		for(int i=1;i<=k;i++) 
		{
			cin>>b[i];
			a[i]=b[i];
		}
		i=k;
		while(a[i]==n-k+i&&i>0) i--;
		if(i<1)
		{
			cout<<k<<"\n";
		}
		else
		{
			a[i]++;
			for(j=i+1;j<=k;j++) a[j]=a[j-1]+1;
			for(i=1;i<=k;i++)
			{
				for(j=1;j<=k;j++) 
				{
					if(a[i]==b[j]) dem++;
				}
			}
			if(dem==k) dem=0;
			cout<<k-dem<<"\n";
		}
	}
 
	return 0;
}