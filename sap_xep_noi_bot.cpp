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
	int n, x;
	cin >> n;
	int a[n];
	fori(i,0,n) cin >> a[i];
	bool res;
	fori (i,0,n){
		res = 1;
		fori (j,0, n-1){
			if(a[j] > a[j + 1]) {
				swap(a[j],a[j+1]);
				res = 0;
			}
		}
		if (res) return 0;
		cout << "Buoc " << i + 1 << ":";
		fori (j,0,n) cout << " " << a[j];
		cout << "\n";
	}
}