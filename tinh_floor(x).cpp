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

ll x, k;
int n;
vector < ll > a;

int BS(int l, int r, ll value){
	int mid, res = -2;
	while (l <= r){
		mid = (l + r) / 2;
		if(a[mid] <= value) {
			res = mid;
			l = mid + 1;
		}
		else r = mid - 1;
	}
	return res + 1;
}
void xl(){
	cin >> n >> x;
	fori(i,0, n){
		cin >> k;
		a.pb(k);
	}
	sort(a.begin(), a.end());
	cout << BS(0, n - 1, x);
	a.clear();
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