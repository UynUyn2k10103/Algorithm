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

string quay_phai(string a){
    string res = "";
    res = res + a[0] + a[4] + a[1] + a[3] + a[8] + a[5] + a[2] + a[7] + a[9] + a[6];
    return res;
}

string quay_trai(string a){
    string res = "";
    res = res + a[3] + a[0] + a[2] + a[7] + a[4] + a[1] + a[6] + a[8] + a[5] + a[9];
    return res;
}

string quay_phai2(string a){
    string res = "";
    res = res + a[0] + a[2] + a[6] + a[3] + a[1] + a[5] + a[9] + a[7] + a[4] + a[8];
    return res;
}

string quay_trai2(string a){
    string res = "";
    res = res + a[1] + a[5] + a[2] + a[0] + a[4] + a[8] + a[6] + a[3] + a[7] + a[9];
    return res;
}

string v;

map <string, int> vs1, vs2;

void BFS(string u){
    queue <string> q;
    q.push(u);
    vs2[u] = 1;
    int n = 24;
    while (n -- ){
        u = q.front(); q.pop();
        v = quay_phai2(u);
        if(!vs2[v]){
            vs2[v] = vs2[u] + 1;
            q.push(v);
        }
        v = quay_trai2(u);
        if(!vs2[v]){
            vs2[v] = vs2[u] + 1;
            q.push(v);
        }
    }
    
}

void BFS1(string u){
    vs1.clear();
    queue <string> q;
    q.push(u);
    vs1[u] = 1;
    while (!q.empty()){
        u = q.front(); q.pop();
        if(vs2[u]){
            cout << vs2[u] + vs1[u] - 2;
            return;
        }
        v = quay_phai(u);
        if(!vs1[v]){
            vs1[v] = vs1[u] + 1;
            q.push(v);
        }
        v = quay_trai(u);
        if(!vs1[v]){
            vs1[v] = vs1[u] + 1;
            q.push(v);
        }
    }
    
}

int x;

void xl (){
    string u = "";
    fori(i, 0, 10){
        cin >> x;
        u = u + char (x + '0');
    }
    BFS1(u);
    
}

int main(){
    fastIO();
    BFS("1238004765");
    int T; 
    //T = 1;
    cin >> T;
    //cin.ignore();
    while (T -- ){
        xl();
        cout << "\n";
    }
}