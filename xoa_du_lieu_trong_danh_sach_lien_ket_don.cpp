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

void xl (){
    ll n, k, x;
    cin >> n;
    queue <ll> q;
    fori(i, 0, n){
        cin >> x;
        q.push(x);
    }
    cin >> k;
    while (!q.empty()){
        if(q.front() != k) cout << q.front() << " ";
        q.pop();
    }
    
}

int main(){
    fastIO();
    int T; 
    T = 1;
    //cin >> T;
    //cin.ignore();
    while (T -- ){
        xl();
        cout << "\n";
    }
}