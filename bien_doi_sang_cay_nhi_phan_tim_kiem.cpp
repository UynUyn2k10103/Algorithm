#include <bits/stdc++.h>
using namespace std;

typedef struct Node{
	int value;
	Node *left;
	Node *right;
} *Tree;

int n, u, v;
char c;

Tree makeNode(int value){
	Tree p = new Node();
	p->value = value;
	p->left = NULL;
	p->right = NULL;
	return p;

}

bool isLeft(int value, int cmp){
	return value < cmp;
}

bool isRight(int value, int cmp){
	return value > cmp;
}

Tree Insert(Tree root, int value){
	if(root == NULL){
		root = makeNode(value);
		return root;
	}
	if(isLeft(value, root->value)) root-> left= Insert(root->left, value);
	else root->right = Insert(root->right, value);
	return root;
}

void showInOrder(Tree root){
	if(root == NULL) return;
	showInOrder(root->left);
	cout << root->value << " ";
	showInOrder(root->right);
}

void solve(){
	Tree Root = NULL;
	cin >> n;
	while(n--){
		cin >> u >> v >> c;
		if(Root == NULL){
			Root = makeNode(u);
		}
		Root = Insert(Root, v);
	}
	showInOrder(Root);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T;
	cin >> T;
	while(T--){
		solve();
		cout << "\n";
	}
}