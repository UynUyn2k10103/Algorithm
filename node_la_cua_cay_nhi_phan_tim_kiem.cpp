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

typedef struct node{
    int infor;
    node *left;
    node *right;
} *tree;

bool isLeft(tree root, int value){
    return value < root->infor;
}

bool isRight(tree root, int value){
    return value > root->infor;
}

tree Insert(tree root, int value){
    if(root == NULL){
        root = new node();
        root -> infor = value;
        root -> left = NULL;
        root -> right = NULL;
        return root;
    }
    if(isLeft(root, value)){
        root->left = Insert(root->left, value);
    }
    else if(isRight(root, value)){
        root -> right = Insert(root -> right, value);
    }
    return root;
}

// void showPreOrder(tree root){
//     if(root == NULL) return;
//     cout << root -> infor << " ";
//     showPreOrder(root -> left);
//     showPreOrder(root -> right);
// }

// void showPostOrder(tree root){
//     if (root == NULL) return;
//     showPostOrder(root -> left);
//     showPostOrder(root -> right);
//     cout << root -> infor <<' ';
// }

void showLeaf(tree root){
    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL) {
        cout << root->infor << " ";
        return;
    }
    showLeaf(root->left);
    showLeaf(root->right);
}

void xl (){
    tree root = NULL;
    int n, value;
    cin >> n;
    fori(i, 0, n){
        cin >> value;
        root = Insert(root, value);
    }
    //showPreOrder(root);
    //showPostOrder(root);
    showLeaf(root);
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