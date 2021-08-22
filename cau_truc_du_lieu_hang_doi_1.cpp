#include<bits/stdc++.h>
#define fori(i,a,b) for(long long i = a; i < b; i++)
#define forr(i,a,b) for(long long i = a-1;i >= b; i--)
#define ll long long
using namespace std;

int n;

void xl(){
	deque <int> q;
	cin >> n;
	int x, truy_van;
	while (n--){
		cin >> truy_van;
		if (truy_van == 1) cout << q.size() << "\n";
		else if (truy_van == 2) {
			if (q.empty()) cout << "YES\n";
			else cout <<"NO\n";
		}
		else if (truy_van == 3){
			cin >> x;
			q.push_back(x);
		}
		else if (truy_van == 4){
			if (!q.empty()) q.pop_front();
		}
		else if (truy_van == 5){
			if (q.empty()) cout << "-1";
			else cout << q.front();
			cout << "\n";
		}
		else {
			if (q.empty()) cout << "-1";
			else cout << q.back();
			cout << "\n";
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T;
	cin >> T;
	while (T--){
		xl();
		cout << "\n";
	}
}