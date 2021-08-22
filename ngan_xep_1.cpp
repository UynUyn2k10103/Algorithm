#include <bits/stdc++.h>
#define ll long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F fist
#define S second
using namespace std;

void fastIO(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	cout.tie(0);
}

stack <int> q, res;
int x;
string s;

void xl(){
	while (cin >> s){
		if (s == "push"){
			cin >> x;
			q.push(x);
		}
		else if (s == "pop") {
			if( !q.empty()) q.pop();
		}
		else{
			if (q.empty()){
				cout << "empty\n";
				continue;
			}
			while(!q.empty()){
				x = q.top();
				res.push(x);
				q.pop();
			}
			while (!res.empty()){
				x = res.top();
				q.push(x);
				cout << x << " ";
				res.pop();
			}
			cout << "\n";
		}
	}
}

int main (){
	fastIO();
	xl();
}
// int main(){
// 	fastIO();
// 	int T; 
// 	//T = 1;
// 	cin >> T;
// 	while (T -- ){
// 		xl();
// 		cout << "\n";
// 	}
// }