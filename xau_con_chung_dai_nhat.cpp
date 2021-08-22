#include <bits/stdc++.h>
using namespace std;
int a[1005][1005];
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t,res;
	cin>>t;
	string s1,s2;
	while(t--)
	{
		res=0;
		cin>>s1>>s2;
		for(int i=0;i<1005;i++)
			for(int j=0;j<1005;j++) a[i][j]=0;
		for(int i=1;i<=s1.size();i++)
		{
			for(int j=1;j<=s2.size();j++)
			{
				if(s1[i-1]==s2[j-1]) a[i][j]=a[i-1][j-1]+1;
				else a[i][j]=max(max(a[i-1][j],a[i][j-1]),a[i-1][j-1]);
				if(a[i][j]>res) res=a[i][j];
			}
		}
		cout<<res<<"\n";
	}


	return 0;
}