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

int n, x;
priority_queue <int> b;
priority_queue <int, vector <int>, greater <int> > a;

void xl (){
    cin >> n;
    
    fori(i, 0, n){
        cin >> x;
        if(i % 2) b.push(x);
        else a.push(x);
    }
    n = min(a.size(), b.size());
    while (n --){
        cout << a.top() << " " << b.top() << " ";
        a.pop(); b.pop();
    }
    while (!a.empty()){
        cout << a.top(); a.pop();
    }
    while (!b.empty()){
        cout << b.top(); b.pop();
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
        //cout << "\n";
    }
}