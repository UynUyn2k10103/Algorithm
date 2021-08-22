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
const ll oo = 1e6 + 5;

vector <int> a, L, R;
int n;

void xl (){
	cin >> n; n ++;

	a.clear(); L.clear(); R.clear();
	a.resize(n); L.resize(n); R.resize(n + 1);
	L[0] = 0; a[0] = 0; R[n] = 0;
	
	fori(i, 1, n) {
		cin >> a[i];
		L[i] = a[i];
		R[i] = a[i];
	}
	fori(i,1,n){
		fori(j, 1, i) if(a[i] > a[j]) L[i] = max(L[i], L[j] + a[i]);
	}
	forr(i, n + 1, 1){
		fori(j, i + 1, n + 1) if(a[i] > a[j]) R[i] = max(R[i], R[j] + a[i]);
	}

	int ans = 0;
	fori(i, 1, n){
		ans = max (ans, L[i] + R[i] - a[i]);
	}
	cout << ans;
	
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