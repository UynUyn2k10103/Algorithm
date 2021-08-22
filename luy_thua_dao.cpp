#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F fist
#define S second
#define ull unsigned long long
using namespace std;

const ll mod = 1e9 + 7;

long long dao(long long n) {
	long long a = 0;
	while (n > 0) {
		a = a * 10 + n % 10;
		n /= 10;
	}
	return a;
}

long long luythua(long long x, long long y) {
	if (y == 1) return x;
	long long res = luythua(x, y / 2) % mod;
	res = (res * res) % mod;
	if (y % 2 == 0) return res;
	return (res * x) % mod;
}

void xl () {
	long long n;
	cin >> n;
	long long r = dao(n);
	cout << luythua(n, r);
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