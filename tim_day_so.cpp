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

int n, minn, res;
vector <int> a;
bool ok;

void xl (){
	cin >> n;
	a.clear(); minn = 1e6; res = 0;
	a.resize(n);
	fori(i, 0, n) {
		cin >> a[i];
		minn = min(a[i], minn);
	}
	int b;
	forr(i, minn + 1, 1){
		ok = 1;
		fori(j, 0, n){
			b = a[j] / i;
			if(a[j] / b == i){
				while(b && a[j] / b == i) b --;
				res += (b + 1);
			}
			else {
				res = 0;
				ok = 0;
				break;
			}
		}
		if(ok){
			cout << res;
			return;
		}
	}
}

int main(){
	fastIO();
	int T; 
	T = 1;
	//cin >> T;
	//cin.ignore();
	while (T -- ){
		xl();
		//cout << "\n";
	}
}