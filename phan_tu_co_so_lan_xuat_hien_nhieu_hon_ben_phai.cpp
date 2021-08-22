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
vector <int> a, f, L;
stack <int> k;

void xl (){
    cin >> n;
    a.clear(); f.clear(); L.clear();
    a.resize(n); f.resize(oo, 0); L.resize(n);

    fori(i, 0, n) {
        cin >> a[i];
        f[a[i]] ++;
    }

    fori(i, 0, n){
        while (!k.empty() && f[a[i]] > f[a[k.top()]] ) {
            L[k.top()] = a[i];
            k.pop();
        }
        k.push(i);
    }
    while(!k.empty()){
        L[k.top()] = -1;
        k.pop();
    }
    fori(i, 0, n) cout << L[i] << " ";


    
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