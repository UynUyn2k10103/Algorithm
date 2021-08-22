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
int a[10000];

void xl(){
	cin >> n;
	fori (i,0,n) cin >> a[i];
	int i = n - 2;
	while(i >= 0 && a[i] > a[i + 1]) i--;
	if(i < 0) {
		fori(j, 1, n + 1) cout << j << " ";
		return;
	}
	int k = n - 1;
	while (a[k] < a[i]) k --;
	swap(a[k], a[i]);
	sort(a + i + 1, a + n);
	fori(i,0,n) cout << a[i] << " ";
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