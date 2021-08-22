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

ll dem;
string s;
ll res;

void xl (){
	res = 0; dem = 0;
	cin >> s;
	fori(i,0,s.size()){
		if (s[i] == '(') dem ++;
		else {
			if (dem == 0) {
				res ++;
				dem ++;
			}
			else dem --;
		}
	}
	res += dem / 2;
	cout << res;
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