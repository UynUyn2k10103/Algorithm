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
ll res1, res2 , a, b;
string s;

void xl(){
	cin >> s;
	a = 0; b = 0;
	fori(i,0,s.size()){
		if (s[i] == '5'){
			a = a * 10 + 6;
			b = b * 10 + 5;
		}
		else if (s[i] == '6'){
			a = a * 10 + 6;
			b = b * 10 + 5;
		}
		else {
			a = a * 10 + int (s[i] - '0');
			b = b * 10 + int (s[i] - '0');
		}
	}
	res1 = a; res2 = b;
	cin >> s;
	a = 0; b = 0;
	fori(i,0,s.size()){
		if (s[i] == '5'){
			a = a * 10 + 6;
			b = b * 10 + 5;
		}
		else if (s[i] == '6'){
			a = a * 10 + 6;
			b = b * 10 + 5;
		}
		else {
			a = a * 10 + int (s[i] - '0');
			b = b * 10 + int (s[i] - '0');
		}
	}
	res1 += a; res2 += b;
	cout << res2 << " " << res1;

}

int main(){
	fastIO();
	int T; 
	T = 1;
	//cin >> T;
	while (T -- ){
		xl();
		//cout << "\n";
	}
}