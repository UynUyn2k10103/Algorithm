#include <bits/stdc++.h>
#define ll long long
#define fori(i,a,b) for (int i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F fist
#define S second
using namespace std;

int n, m, x , k;
ll p[200], q[200];
ll res;

void xl(){
	cin >> n >> m;
	fori(i,0,n) cin >> p[i];
	fori(i,0,m) cin >> q[i];
	ll res [n + m] = {0};
	fori(i,0,n){
		fori(j,0,m){
			res[i + j] += p[i] * q[j];
		}
	}
	fori(i,0, m + n - 1){
		cout << res [i] << " ";
	}
}
int main(){
	int T;
	cin >> T;
	while (T -- ){
		xl();
		cout << "\n";
	}
}