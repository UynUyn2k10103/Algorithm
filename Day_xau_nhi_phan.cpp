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

ull f[100];

void fibo(){
	f[0] = 0;
	f[1] = 1;
	fori(i, 2, 94) f[i] = f[i - 1] + f[i - 2];
} 

int Try(ull k, int n){
	while(k && n > 2){
		if(k > f[n - 2]) {
			k -= f[n - 2];
			n --;
		}
		else n -= 2;
	}
	if(n == 1) return 0;
	if(n == 2) return 1;
}

void xl(){
	int n;
	ull k;
	cin >> n >> k;
	cout << Try(k, n);
}

int main(){
	fastIO();
	fibo();
	int T; 
	T = 1;
	cin >> T;
	while (T -- ){
		xl();
		cout << "\n";
	}
}