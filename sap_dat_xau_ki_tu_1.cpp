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

string s;
int f[300];
int res;

void xl(){
	cin >> s; res = 0;
	fori(i,0,s.size()) f[s[i]] ++;
	fori(i,0,300){
		if (f[i]){
			res = max (res, f[i]);
			f[i] = 0;
		}
	}
	int n = s.size();
	if (n % 2 && n / 2 + 1 >= res) cout << "1";
	else if(n % 2 == 0 && n / 2 >= res) cout << "1";
	else cout << "-1";
	
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