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

string s;
int res, x;

void xl(){
	cin >> s;
	res = 0;
	stack <int> st;
	st.push(-1);
	fori(i, 0, s.size()){
		if (s[i] == '(') st.push(i);
		else {
			if(!st.empty()) st.pop();
			if(st.empty()) st.push(i);
			else {
				x = i - st.top();
				res = max(res, x);
			}
		}
	}
	cout << res ;
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