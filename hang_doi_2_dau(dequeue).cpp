#include<bits/stdc++.h>
#define fori(i,a,b) for(long long i = a; i < b; i++)
#define forr(i,a,b) for(long long i = a-1;i >= b; i--)
#define ll long long
using namespace std;

int n;

void xl(){
	deque <int> q;
	cin >> n;
	int x;
	string s;
	while (n--){
		cin >> s;
		if (s == "PUSHFRONT"){
			cin >> x;
			q.push_front (x);
		}
		else if (s == "PRINTFRONT"){
			if(q.empty()) cout <<"NONE\n";
			else cout << q.front() <<"\n";
		}
		else if (!q.empty() && s == "POPFRONT") q.pop_front();
		else if (s == "PUSHBACK"){
			cin >> x;
			q.push_back (x);
		}
		else if (s == "PRINTBACK"){
			if(q.empty()) cout <<"NONE\n";
			else cout << q.back() <<"\n";
		}
		else if (!q.empty()) q.pop_back();

	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T;
	T = 1;
	//cin >> T;
	while (T--){
		xl();
		cout << "\n";
	}
}