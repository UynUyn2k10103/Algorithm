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
vector <int> a, L;
stack <int> k;

void xl (){
    cin >> n; n ++;
    L.clear(); a.clear();
    a.resize(n);
    L.resize(n);
    fori(i, 1, n) cin >> a[i];
    fori(i, 1, n){
        while(!k.empty() && a[i] >= a[k.top()]) k.pop();
        L[i] = (k.empty())? 0 : k.top();
        k.push(i);
    }
    fori(i, 1, n) cout << i - L[i] << " ";
    while (!k.empty()){
        k.pop();
    }
    
    
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