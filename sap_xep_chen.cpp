#include <bits/stdc++.h>
#define ll long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F fist
#define S second
using namespace std;

int main(){
	int n, x;
	cin >> n;
	priority_queue <int> q;
	stack <int> st;
	fori(i,0,n){
		cin >> x;
		q.push(x);
		while(!q.empty()){
			x = q.top();
			st.push (x);
			q.pop();
		}
		cout << "Buoc " << i << ":";
		while (!st.empty()){
			x = st.top();
			cout << " " << x;
			q.push(x);
			st.pop();
		}
		cout << "\n";
	}
}