#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* next;
	Node(int data){
		this->data = data;
		this->next = NULL;
	}
};
Node* head = NULL;
void insert_in_head(int data){
	Node* new_node = new Node(data);
	if(head==NULL){
		head = new_node;
		return;
	}
	new_node->next = head;
	head = new_node;
}
void insert_in_tail(int data){
	Node* new_node = new Node(data);
	if(head==NULL){
		head = new_node;
		return;
	}
	Node* temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = new_node;
}
void print_list(){
	if(head == NULL){
		cout << "empty list" << endl;
		return;
	}
	Node* temp = head;
	while(temp != NULL){
		cout << temp->data << endl;
		temp = temp->next;
	}
}
int main(){
	insert_in_head(10);
	insert_in_head(20);
	insert_in_head(30);
	insert_in_head(40);
	insert_in_tail(100);
	print_list();
	return 0;
}

