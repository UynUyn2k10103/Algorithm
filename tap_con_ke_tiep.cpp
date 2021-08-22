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

int n, k;
int a[10000];

void xl(){
	cin >> n >> k;
	fori(i,1,k + 1) cin >> a[i];
	int i = k;
	while(i > 0 && a[i] == n - k + i) i--;
	if (!i) {
		fori (j,1,k + 1) cout << j << " ";
		return;
	}
	a[i] ++; i ++;
	fori(j, i, k + 1) a[j] = a[j-1] + 1;
	fori(i,1, k + 1) cout << a[i] << " ";
	
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