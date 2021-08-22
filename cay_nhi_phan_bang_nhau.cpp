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

void AddLeft(tree root, int u, int v){
    tree p = Search(root, u);
    if(p != NULL && p->left == NULL){
        p->left = makeRoot(v);
    }
}

void AddRight(tree root, int u, int v){
    tree p = Search(root, u);
    if(p != NULL && p->right == NULL){
        p->right = makeRoot(v);
    }
}

bool compareTree(tree T, tree root){
    if(T == NULL || root == NULL){
        if(T == root) return 1;
        return 0;
    }
    if(T->infor != root->infor) return 0;
    return compareTree(T->left, root->left) && compareTree(T->right, root->right);
}

void xl (){
    tree root = NULL;
    int n, m;
    cin >> n;
    int u, v;
    char x;
    for(int i = 0; i < n; i ++) {
        cin >> u >> v >> x;
        if(root == NULL){
            root = makeRoot(u);
        }
        if(x == 'L') AddLeft(root, u, v);
        else AddRight(root, u, v);
    }

    cin >> m;
    tree T = NULL;
    for(int i = 0; i < m; i ++) {
        cin >> u >> v >> x;
        if(T == NULL){
            T = makeRoot(u);
        }
        if(x == 'L') AddLeft(T, u, v);
        else AddRight(T, u, v);
    }

    if(n != m){
        cout << "0";
        return;
    }
    if(compareTree(root, T)) cout << "1";
    else cout << "0";
}

int main(){
    fastIO();
    int test; 
    //T = 1;
    cin >> test;
    //cin.ignore();
    while (test -- ){
        xl();
        cout << "\n";
    }
}