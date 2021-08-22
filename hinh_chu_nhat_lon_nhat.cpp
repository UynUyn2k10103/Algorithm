#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define ull unsigned long long
using namespace std;

int n;
const int oo = 1e5 + 1;
vector <ll> l, r;
ll a[oo];

void xl(){
	stack <int> k;
	cin >> n; n ++;
	l.resize(n,0);
	fori(i,1,n) cin >> a[i];
	fori(i,1,n) {
		while (!k.empty() && a[i] <= a[k.top()]) k.pop();
		l[i] = k.empty() ? 0 : k.top();
		k.push(i);
	}
	while(!k.empty()) k.pop();
	r.resize(n,0);
	forr(i,n,1) {
		while (!k.empty() && a[i] <= a[k.top()]) k.pop();
		r[i] = k.empty() ? n : k.top();
		k.push(i);
	} 
	ll res = 0;
	fori (i, 1, n) {
		res = max (res, (r[i] - l[i] - 1) * a[i] );
	}
	cout << res;
	l.clear();
	r.clear();
	
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