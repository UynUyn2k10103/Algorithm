#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F fist
#define S second
using namespace std;

ll res;
vector < ll > v;
ll n,x;
const ll  oo = 1e9 + 7;

void xl(){
	cin >> n;
	res = 0;
	fori(i,0, n){
		cin >> x;
		v.pb(x);
	}
	sort(v.begin(),v.end());
	fori(i,0, n){
		res += (i * v[i]) % oo;
		res %= oo;
	}
	cout << res;
    v.clear();
}

int main(){
	fastIO();
	int T; 
	//T = 1;
	cin >> T;
	while (T -- ){
		xl();
		cout << "\n";
	}
}