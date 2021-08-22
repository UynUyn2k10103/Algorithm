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

vector <int> a, R, L;
int n;
stack <int> k;


void xl (){
    a.clear(); R.clear(); L.clear();
    cin >> n;  n ++;
    a.resize(n); R.resize(n); L.resize(n);

    fori(i, 1, n) cin >> a[i];
    forr(i, n, 1){
        while(!k.empty() && a[i] >= a[k.top()]) k.pop();
        R[i] = (k.empty())? n : k.top();
        k.push(i);
    }
    while ((!k.empty())){
        k.pop();
    }
    forr(i, n, 1){
        while(!k.empty() && a[i] <= a[k.top()]) k.pop();
        L[i] = (k.empty())? n : k.top();
        k.push(i);
    }
    while (!k.empty()){
        k.pop();
    }
    
    fori(i, 1, n) {
        if(R[i] == n){
            cout << "-1 ";
            continue;
        }
        if(L[R[i]] == n){
            cout << "-1 ";
            continue;
        }
        cout << a[L[R[i]]] << " ";
        //cout << R[i] << " " << L[R[i]] << "* ";

    }
    //cout << "\n";
    //fori(i, 1, n) cout << L[i] << " ";

}

int main(){
    //fastIO();
    int T; 
    //T = 1;
    cin >> T;
    //cin.ignore();
    while (T -- ){
        xl();
        cout << "\n";
    }
}