#include<bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"
using namespace std;

void Try(int val, int n, vector <int> v){
    if(n == 0){
        cout << "(";
        fori(i, 0, v.size() - 1) cout << v[i] << " ";
        cout << v[v.size() - 1] << ") ";
        return;
    }
    for(int i = val; i > 0; i--){
        
        if(n - i>= 0) {
            v.pb(i);
            Try(i, n - i, v);
            v.pop_back();
        }
    }
}

int n;
void xl(){
    cin >> n;
    vector <int> v;
    Try(n, n, v);
}

int main(){
    fastIO();
    int T;
    cin >> T;
    while(T--){
        xl();
        cout << "\n";
    }
}