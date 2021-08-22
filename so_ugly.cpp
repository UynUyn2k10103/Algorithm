#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F fist
#define S second
using namespace std;

// const ll mod = 1e9 + 7;
// const ll oo = 1e6 + 5;

vector <ll> res;
const ll oo = 1e18;

void prepare(){
	for(ll i = 1; i < oo; i *= 2 ){
		for(ll j = 1; (i * j) < oo; j *= 3){
			for(ll k = 1; (i * j * k) < oo; k *= 5){
				res.pb(i * j * k);
			}
		}
	}
	sort(res.begin(), res.end());
}

int n;

void xl (){
	cin >> n;
	cout << res[n - 1];
}

int main(){
	prepare();
	fastIO();
	int T; 
	//T = 1;
	cin >> T;
	cin.ignore();
	while (T -- ){
		xl();
		cout << "\n";
	}
}