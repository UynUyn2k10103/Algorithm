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

int n;
stack <int> st;

void cd(int x){
	while (x){
		st.push(x % 2);
		x /= 2;
	}
	while(!st.empty()){
		cout << st.top();
		st.pop();
	}
	cout << " ";
}

void xl(){
	cin >> n; n++;
	fori(i,1,n) cd(i);
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