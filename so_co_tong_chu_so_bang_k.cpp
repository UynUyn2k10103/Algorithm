#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
using namespace std;

const ll mod = 1e9 + 7;

ll Tim(int n, int k, int st, vector < vector <ll> > & res ){
	if(n * 9 < k) return 0;
	if(n == 0) return k == 0;
	if(res[n][k]) return res[n][k];
	
	ll ans = 0;
	fori(i, st, 10){
		if(k - i >= 0){
			ans += Tim(n - 1, k - i, 0, res) ;
			ans %= mod;
		}
	}

	return res[n][k] = ans;
}

int n, k;

void xl (){
	cin >> n >> k;
	vector < vector <ll> > res(n + 1, vector <ll> (k + 1, 0));
	//cout << n << " " << k << "\n";
	cout << Tim(n, k, 1, res);
}

int main(){
	fastIO();
	int T; 
	//T = 1;
	cin >> T;
	//cin.ignore();
	while (T -- ){
		xl();
		cout << "\n";
	}
}