#include<bits/stdc++.h>
using namespace std;

// define a struct
struct Node{
	int data;
	Node* next;
	Node* prev;
	Node(int data){
		this->data = data;
		this->next = NULL;
		this->prev = NULL;
	}
};

Node* front = NULL;
Node* rear = NULL;
int SIZE = 0;

// Enqueeu in queue
// Time Complexity: 0(1)
void push(int data){
	Node* new_node = new Node(data);
	if(front == NULL || rear == NULL){
		SIZE++;
		front = rear = new_node;
		return;
	}
	rear->prev = new_node;
	new_node->next = rear;
	rear = new_node;
}
// Dequeue in Queue
// Time Complexity: 0(1)
int pop(){
	int data = front->data;
	front = front->prev;
	SIZE--;
	return data;
}
// Time Complexity: 0(1)
bool empty(){
	return SIZE == 0 ? true : false;
}
// Time Complexity: 0(1)
int size(){
	return SIZE;
}

// main function
// 
int main(){
	push(10);
	push(20);
	push(30);
	cout << pop() << endl;
	cout << pop() << endl;
	return 0;
}