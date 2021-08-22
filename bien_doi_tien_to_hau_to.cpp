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

string s, tmp;
stack <string> st;

void xl (){
    cin >> s;
    forr(i, s.size(), 0){
        tmp = "";
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^'){
            if(!st.empty()){
                tmp = st.top();
                st.pop();
            }
            if(!st.empty()){
                tmp = tmp + st.top();
                st.pop();
            }
        }
        tmp = tmp + s[i];
        st.push(tmp);
    }
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
    
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