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

const ll mod = 123456789;
const ll oo = 1e6 + 5;

ll n;

ll Try(ll k){
    if(k == 0) return 1;
    ll x = Try(k / 2);
    x = x * x;
    x %= mod;
    if(k % 2) return (x * 2) % mod;
    return x;
}

void xl (){
    cin >> n;
    if(n <= 0) cout << "0";
    else cout << Try (n - 1);
    
}

int main(){
    fastIO();
    int T; 
    //T = 1;
    cin >> T;
    //cin.ignore();
    while (T -- ){
        xl();
        cout << "\n";
    }
}