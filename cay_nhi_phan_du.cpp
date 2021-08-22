#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

typedef struct node{
    int infor;
    node *left;
    node *right;
} *tree;

tree makeRoot(int u){
    tree root = new node();
    root->infor = u;
    root->left = NULL;
    root->right = NULL;
    return root;
}

tree Search(tree root, int u){
    if(root == NULL) return NULL;
    if(root->infor == u) return root;
    tree p = Search(root->left, u);
    if(p == NULL) p = Search(root->right, u);
    return p;
}

void AddLeft(tree &root, int u, int v){
    tree p = Search(root, u);
    if(p != NULL && p->left == NULL){
        p->left = makeRoot(v);
    }
}

void AddRight(tree &root, int u, int v){
    tree p = Search(root, u);
    if(p != NULL && p->right == NULL){
        p->right = makeRoot(v);
    }
}

bool check(tree root){
    if(root == NULL) return 1;
    if(root->left == NULL && root->right == NULL) return 1;
    if(!(root->left != NULL && root->right != NULL)) return 0;
    return check(root->left) && check(root->right);
}

void xl (){
    tree root = NULL;
    int n;
    cin >> n;
    int u, v;
    char x;
    while(n--){
        cin >> u >> v >> x;
        if(root == NULL){
            root = makeRoot(u);
        }
        if(x == 'L') AddLeft(root, u, v);
        else AddRight(root, u, v);
    }
    cout << check(root);
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