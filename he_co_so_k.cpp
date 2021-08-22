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

int k;
stack <int> st;

ll cd(string s){
	ll tmp = 0;
	fori(i,0,s.size()){
		tmp = tmp * k + (s[i] - '0');
	}
	return tmp;
}

ll res;

void xl(){
	string s;
	cin >> k >> s;
	res = cd(s);
	cin >> s;
	res += cd(s);
	while(res){
		st.push(res % k);
		res /= k;
	}
	while (!st.empty()){
		cout << st.top();
		st.pop();
	}
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