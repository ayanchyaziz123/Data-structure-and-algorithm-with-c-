#include<bits/stdc++.h>
using namespace std;

//define struct
struct Node{
	int data;
	Node* next;
	Node(int data){
		this->data = data;
		this->next = NULL;
	}
};
Node* head = NULL;
int SIZE = 0;
// insert data in stack
// Time Complexity: 0(1)
void push(int data){
	SIZE++;
	Node* new_node = new Node(data);
	if(head==NULL){
		head = new_node;
		return;
	}
	new_node->next = head;
	head = new_node;
}
// delete data in stack
// Time Complexity: 0(1)
void pop(){
	if(SIZE==0){
		cout << "Stack is empty..!" << endl;
		return;
	}
	head = head->next;
	SIZE--;
}
// Time Complexity: 0(1)
int size(){
	return SIZE;
}
// Time Complexity: 0(1)
bool empty(){
	return SIZE == 0 ? true : false;
}
// Time Complexity: 0(n)
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
	push(10);
	push(20);
	push(30);
	push(40);
	pop();
	print_list();

	return 0;
}

