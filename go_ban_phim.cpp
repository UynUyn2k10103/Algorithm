#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
using namespace std;

const ll mod = 1e9 + 7;
const ll oo = 1e6 + 5;

string s;
stack <char> front, back;
void xl (){
	getline(cin,s);
	fori(i, 0, s.size()){
		if(s[i] == '<'){
			if(!front.empty()){
				back.push(front.top());
				front.pop();
			}
		}
		else if(s[i] == '>'){
			if(!back.empty()){
				front.push(back.top());
				back.pop();
			}
		}
		else if(s[i] == '-'){
			if(!front.empty()){
				front.pop();
			}
		}
		else front.push(s[i]);
	}
	while (!front.empty()){
		back.push(front.top());
		front.pop();
	}
	while (!back.empty()){
		cout << back.top();
		back.pop();
	}
	
	
}

int main(){
	fastIO();
	xl();
}