#include<bits/stdc++.h>
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
#define ll long long
using namespace std;

const ll mod = 1e9 + 7;
ll n, k;

ll luythua(ll x, ll y){
	if ( y == 0) return 1;
	ll res = luythua(x,y/2);
	res = res * res;
	res %= mod;
	if ( y % 2) return (res * x) % mod;
	return res;
}

int main(){
	int T;
	cin >> T;
	while (T--){
		cin >> n >> k;
		n %= mod;
		cout << luythua(n , k) << "\n";
	}
}