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

int n;
string s;
ll tmp;
queue <ll> so;

ll cd(string k){
	tmp = 0;
	fori(i, 0, k.size()) tmp = tmp * 10 + int(k[i] - '0');
	return tmp;
}

ll caculator(ll a, ll b, char x){
	if(x == '+') return a + b;
	if(x == '-') return a - b;
	if(x == '*') return a * b;
	return a / b;
}

void xl (){
	cin >> n;
	string k;
	cin.ignore();
	getline(cin, s);
	forr (i, s.size(), 0){
		if(s[i] >= '0' && s[i] <= '9'){
			k = "";
			while (s[i] >= '0' && s[i] <= '9' && i >= 0){
				k = s[i --] + k; 
			}
			so.push(cd(k));
			i ++;
		}
		if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
			tmp = so.front();
			so.pop();
			tmp = caculator(so.front(), tmp, s[i]);
			so.pop();
			so.push(tmp);
		}
	}
	cout << so.front();
	so.pop();
	
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