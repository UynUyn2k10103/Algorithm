#include <bits/stdc++.h>
#define ll long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F fist
#define S second
using namespace std;

int n;
bool a[20][20];
bool res;

void Try(int x, int y, string s){
	if (x == n && y == n){
		res = 0;
		cout << s << " ";
		return;
	}
	if(a[x + 1][y]) Try(x + 1, y, s + 'D');
	if(a[x][y + 1]) Try(x, y + 1, s + 'R');
}

void xl(){
	cin >> n; res = 1; n ++;
	fori(i,1,n){
		fori(j,1,n) cin >> a[i][j];
	}
	fori(i,0,n + 1){
		a[0][i] = 0;
		a[i][0] = 0;
		a[n][i] = 0;
		a[i][n] = 0;
	}
	n --;
	if (!a[1][1]){
		cout << "-1";
		return;
	}
	Try(1,1,"");
	if (res) cout << "-1";
}
int main(){
	int T;
	cin >> T;
	while (T -- ){
		xl();
		cout << "\n";
	}
}