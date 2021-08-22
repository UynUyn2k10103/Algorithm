#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F fist
#define S second
using namespace std;

string cd(ll n){
	if(n == 0) return "0";
	string s = "";
	while(n){
		s = char ('0' + n % 10) + s;
		n /= 10;
	}
	return s;
}

bool compareString(string a, string b){
	int j = 0;
	fori(i,0,a.size()){
		if(a[i] == b[j]) j ++;
		if(j == b.size()) return 1;
	}
	return 0;
}

void xl(){
	ll n; 
	cin >> n;
	ll x = cbrt(n);
	string s = cd(n);
	forr(i, x + 1, 0){
		string s1 = cd(i * i * i);
		if(compareString(s,s1)) {
			cout << s1;
			return;
		}
	}
	cout << "-1";

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