#include<bits/stdc++.h>
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
#define ll long long
using namespace std;
const long long oo=1e9+7;
ll a[100005];
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	ll n,x,sum,k;
	while(t--){
		cin>>n>>k;
		n++; k++;
		sum=1;
		fori(i,1,k){
			a[i]=sum;
			sum=(sum+a[i])%oo;
		}
		x=1;
		sum-=1;
		fori(i,k,n){
			a[i]=sum;
			sum-=a[x++];
			sum+=a[i];
			sum%=oo;
			if(sum<0) sum+=oo;
		}
		cout<<a[n-1]<<"\n";
	}
}