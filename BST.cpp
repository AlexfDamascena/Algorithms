#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define pf push_front
#define x first
#define y second
const int INF = 0x3f3f3f3f;

//g++-9 -std=c++17 main.cpp -o main && time ./main < input.txt
struct TreeNode{
	int data;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int data): data(data), left(nullptr), right(nullptr){}
};

class BSTree{

public:
	BSTree() : root(nullptr){}
	BSTree(TreeNode* rootNode): root(rootNode){}
	void print();
	void insert(int value);
	bool contains(int  value);

private:
	TreeNode *root;
	string subTreeAsString(TreeNode* node);
	void insert(int data, TreeNode*& node);
	bool contains(int value, TreeNode*& node);
};

void BSTree::insert(int value, TreeNode* &node){
	if(value == node->data) return;
	if(value < node->data){
		if(node->left == nullptr) node->left = new TreeNode(value);
		else this->insert(value,node->left);
	} else {
			if(node->right == nullptr) node->right = new TreeNode(value);
			else this->insert(value,node->right);
	}
}

bool BSTree::contains(int value, TreeNode*& node){
	if(node == nullptr) return false;
	if(value == node->data) return true;
	if(value < node->data) return this->contains(value,node->left);
	if(value > node->data) return this->contains(value,node->right);
}

bool BSTree::contains(int value){
	return contains(value, this->root);
}

void BSTree::insert(int value){
	if(root == nullptr) this->root = new TreeNode(value);
	else this->insert(value,this->root);
}

void BSTree::print(){
	if(this->root == nullptr) cout << "{}" << endl;
	else cout << this->subTreeAsString(this->root) << endl;
}

string BSTree::subTreeAsString(TreeNode *node){
	string leftStr = (node->left == nullptr) ? "{}" : subTreeAsString(node->left);
	string rightStr = (node->right == nullptr) ? "{}" : subTreeAsString(node->right);
	string result = "{" + to_string(node->data) + ", " + leftStr + ", " + rightStr + "}";
	return result;
}

void solve(){
	BSTree tree {};
	tree.print();
	tree.insert(5);
	tree.insert(4);
	tree.insert(6);
	tree.print();
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}
