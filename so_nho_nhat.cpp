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

int s, d;
stack <int> st;

void xl(){
	cin >> s >> d;
	if(d == 1 && s == 0) {
		cout << "0";
		return;
	}
	if(s == 0 || d * 9 < s) {
		cout << "-1";
		return;
	}
	s --;
	while(d --){
		if(s >= 9) {
			st.push(9);
			s -= 9;
		}
		else if (s > 0){
			st.push(s);
			s = 0;
		}
		else st.push(0);
	}
	cout << st.top() + 1; st.pop();
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