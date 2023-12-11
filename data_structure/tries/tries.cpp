#include<bits/stdc++.h>
using namespace std;

struct Node
{
	Node* children[26];
	bool isEnd;
	Node(){
		for(int i = 0; i < 26; i++){
			this->children[i] = NULL;
		}
		this->isEnd = false;
	}
};

int getIndexOfChar(char ch){
	return ch - 'a';
}

void insert(Node* root, string st){
	for(int i = 0; i < st.size(); i++){
		int ind = getIndexOfChar(st[i]);
		if(root->children[ind] == NULL){
			root->children[ind] = new Node();
		}
		root = root->children[ind];
	}
	root->isEnd = true;
} 

bool search(Node* root, string st){
	for(int i = 0; i < st.size(); i++){
		int ind = getIndexOfChar(st[i])
		if(root->children[ind] == NULL){
			return false;
		}
		root = root->children[ind];
	}
	return true;
}


int main(){
	int n;
	cin >> n;
	vector<string> st(n);
	for(int i = 0; i < n; i++){
		cin >> st[i];
	}
	Node* root = new Node();
	for(int i = 0; i < n; i++){
		insert(root, st[i]);
	}
	string sr;
	cin >> sr;
	cout << search(root, sr);

	return 0;
}