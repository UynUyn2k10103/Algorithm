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

int n;
bool a[15][15];
vector <string> res;
int x[] = {1, 0, 0, -1};
int y[] = {0, 1, -1, 0};
char si[] = {'D', 'R', 'L', 'U'};

void Try(int X, int Y, string s){
	if(X == n && Y == n) res.push_back(s);
	fori(i,0,4){
		if(a[X + x[i]][Y + y[i]]) {
			a[X + x[i]][Y + y[i]] = 0;
			Try(X + x[i], Y + y[i], s + si[i]);
			a[X + x[i]][Y + y[i]] = 1;
		}
		
	}
}
void xl(){
	cin >> n; n += 2;
	fori(i,0,n){
		a[i][0] = a[0][i] = a[n - 1][i] = a[i][n - 1] = 0;
	} 
	n--;
	fori(i,1, n){
		fori(j,1,n) cin >> a[i][j];
	}
	// n ++;
	// fori(i,0,n){
	// 	fori(j,0,n) cout << a[i][j] << " ";
	// 	cout << "\n";
	// }
	n --;
	res.clear();
	a[1][1] = 0;
	Try(1,1,"");
	if(res.size() == 0){
		cout << "-1";
		return;
	}
	sort(res.begin(), res.end());
	fori(i,0,res.size()) cout << res[i] << " ";
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