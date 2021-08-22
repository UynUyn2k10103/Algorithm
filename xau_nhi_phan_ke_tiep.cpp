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

string s;
bool res;

void xl(){
	cin >> s;
	int i = s.size()  - 1;
	while (i >= 0 && s[i] == '1') {
		s[i] = '0';
		i --;
	}
	if (i >= 0) s[i] = '1';
	cout << s << "\n";
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