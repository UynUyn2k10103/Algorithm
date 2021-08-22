#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define ull unsigned long long
using namespace std;

int n, m, x;
ll a[200][200];

void xl(){
	// dua ve day con dai nhat co tong bang k;
	cin >> n >> m; n ++; m++;
	fori(i,0,m) a[0][i] = 1;
	fori(i,0,n) a[i][0] = 1;
	a[0][0] = 0;
	fori(i,1,n){
		fori(j,1,m){
			a[i][j] = a[i - 1][j] + a[i][j - 1];
		}
	}
	n --;
	m --;
	cout << a[n][m];
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