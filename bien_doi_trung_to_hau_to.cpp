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

int priority(char x){
    if(x == '^') return 3;
    if(x == '+' || x == '-') return 1;
    if(x == '*' || x == '/') return 2;
    return 0;
}
string s;

void xl (){
    cin >> s;

    stack < char > st;
    queue < char > q;

    fori(i, 0, s.size()){
        if(s[i] == '(' || s[i] == '*' || s[i] == '/' || s[i] == '-' || s[i] == '+' || s[i] == '^'){
            if(st.empty() || s[i] == '(') {
                st.push(s[i]);
                continue;
            }
            while(!st.empty() && priority(st.top()) >= priority(s[i])){
                q.push(st.top());
                st.pop();
            }
            st.push(s[i]);
            
        }
        else if(s[i] == ')') {
            while (!st.empty() && st.top() != '('){
                q.push(st.top());
                st.pop();
            }
            st.pop();
        }
        else q.push(s[i]);
    }
    while(!st.empty()) {
        if(st.top() != '(') q.push(st.top());
        st.pop();
    }
    while(!q.empty()){
        cout << q.front();
        q.pop();
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