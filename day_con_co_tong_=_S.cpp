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

int n;
ll s;

void xl(){
	cin >> n >> s;
	int a[n];
	fori(i,0,n) {
		cin >> a[i];
	}
	bool L[s + 1] = {0};
	L[0] = 1;
	fori(i, 0, n){
		forr(j, s + 1, 0) {
			if(L[j] == 0 && L[j - a[i]] == 1) L[j] = 1;
		}
	}
	if (L[s]) cout << "YES";
	else cout << "NO";

}

int main(){
	fastIO();
	int T;
	cin >> T;
	while (T -- ){
		xl();
		cout << "\n";
	}
}