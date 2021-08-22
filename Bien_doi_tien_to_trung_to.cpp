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

stack <string> st;
string tmp, s, k;

void xl(){
	cin >> s;
	forr(i,s.size(),0){
		if(s[i] != '+' && s[i] != '-' && s[i] != '*' && s[i] != '/'){
			tmp = "";
			tmp = tmp + s[i];
			st.push(tmp);
		}
		else {
			tmp = st.top();
			tmp = '(' + tmp;
			st.pop();
			k = st.top();
			k = k + ')';
			st.pop();
			tmp = tmp + s[i];
			tmp = tmp + k;
			st.push(tmp);
		}
	}
	while (!st.empty())
	{
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