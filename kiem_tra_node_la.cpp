#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

typedef struct node {
	int infor;
	struct node *left;
	struct node *right;
} *Tree;

Tree makeRoot(int x){
	Tree p;
	p = new node();
	p->infor = x;
	p->left = NULL;
	p->right = NULL;
	return p;

}

Tree Search(Tree T, int x){
	if(T == NULL) return NULL;
	if(T->infor == x) return T;
	Tree p = Search(T->left, x);
	if(p == NULL) p = Search(T->right, x);
	return p;
}

void addLeft(Tree &T, int u, int v){
	Tree p = Search(T, u), q;
	if(p == NULL) return;
	if(p->left == NULL) {
		q = makeRoot(v);
		p->left = q;
	}
}

void addRight(Tree &T, int u, int v){
	Tree p = Search(T, u), q;
	if(p == NULL) return;
	if(p->right == NULL) {
		q = makeRoot(v);
		p->right = q;
	}
}

int n, u, v;
char x;

int countLeaf(Tree T){
	if(T == NULL) return 0;
	if(T->left == NULL && T->right == NULL) return 1;
	return countLeaf(T->left) + countLeaf(T->right);
}

void xl (){
	cin >> n;
	Tree root = NULL;
	while (n -- ){
		cin >> u >> v >> x;
		if(root == NULL){
			root = makeRoot(u);
		}
		if(x == 'L') addLeft(root, u, v);
		else addRight(root, u, v);
	}
	if(countLeaf(root->left) == countLeaf(root->right)) cout << "1";
	else cout << "0";
	
}

int main(){
	fastIO();
	int test; 
	cin >> test;
	while (test -- ){
		xl();
		cout << "\n";
	}
}