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

stack <char> st, tmp;
string s;

void xl(){
	cin >> s;
	fori(i,0,s.size()){
		if(s[i] != ')') st.push(s[i]);
		else{
			while(st.top()!= '(' || st.empty()){
				tmp.push(st.top());
				st.pop();
			}
			st.pop();
			if(!st.empty() && st.top() == '-'){
				while (!tmp.empty())
				{
					if(tmp.top() == '+') st.push('-');
					else if(tmp.top() == '-') st.push('+');
					else st.push(tmp.top());
					tmp.pop();
				}
			}
			else {
				while (!tmp.empty())
				{
					st.push(tmp.top());
					tmp.pop();
				}
			}
		}
	}
	while(!st.empty()){
		tmp.push(st.top());
		st.pop();
	}
	while (!tmp.empty())
	{
		cout << tmp.top();
		tmp.pop();
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