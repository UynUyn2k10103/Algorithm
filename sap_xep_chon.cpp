#include <bits/stdc++.h>
#define ll long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F fist
#define S second
using namespace std;

int main(){
	int n;
	cin >> n;
	ll a[n];
	fori(i,0,n) cin >> a[i];
	int res, dem = 0;
	fori(i,0,n - 1){
		res = i;
		fori (j, i+1, n){
			if (a[res] > a[j]) res = j;
		}
		//if(res == i) continue;
		swap (a[i], a[res]);
		cout << "Buoc " << ++ dem <<":";
		fori (j,0,n) cout << " " << a[j];
		cout << "\n";
	}
}