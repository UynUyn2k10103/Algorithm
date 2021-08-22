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

ll n, k;
const int oo = 1e6 + 1;
ll a[oo];
ll res;

void xl(){
	cin >> n >> k;
	res = 0;
	fori(i,0,n) {
		cin >> a[i];
		res += a[i];
	}
	sort(a, a + n);
	if (k > n - k) k = n - k;
	n = 0;
	fori(i, 0, k){
		n += a[i];
	}
	cout << res - n * 2;
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