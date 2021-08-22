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
stack < char > st; 
stack < ll > q;

void aaaa(char x){
    ll c;
    if(x == '+'){
        c = q.top();
        q.pop();
        c += q.top();
        q.pop();
        q.push(c);
    }
    else if(x == '-'){
        c = q.top();
        q.pop();
        c -= q.top();
        q.pop();
        q.push(-c);

    }
    else if(x == '*'){
        c = q.top();
        q.pop();
        c *= q.top();
        q.pop();
        q.push(c);
    }
    else if(x == '/'){
        c = q.top();
        q.pop();
        c = q.top() / c;
        q.pop();
        q.push(c);

    }
}
void trung_to_hau_to (){
    fori(i, 0, s.size()){
        if(s[i] == '(' || s[i] == '*' || s[i] == '/' || s[i] == '-' || s[i] == '+' || s[i] == '^'){
            if(st.empty() || s[i] == '(') {
                st.push(s[i]);
                continue;
            }
            while(!st.empty() && priority(st.top()) >= priority(s[i])){
                aaaa(st.top());
                st.pop();
            }
            st.push(s[i]);
            
        }
        else if(s[i] == ')') {
            while (!st.empty() && st.top() != '('){
                aaaa(st.top());
                st.pop();
            }
            st.pop();
        }
        else {
            ll a = 0;
            bool ok = 0;
            while(i < s.size() && s[i] <= '9' && s[i] >= '0'){
                a = a * 10 + int(s[i] - '0');
                i ++;
                ok = 1;
            }
            if(ok) {
                q.push(a);
                i --;
            }

        }
    }
    while(!st.empty()) {
        if(st.top() != '(') {
            aaaa(st.top());
        }
        st.pop();
    }
}
void xl(){
    cin >> s;
    trung_to_hau_to();
    while(!q.empty()){
        cout << q.top();
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