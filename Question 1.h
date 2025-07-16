#include <iostream>

template <typename name>
class Queue {
private:
	struct Node {
		name data;
		Node* next;
		Node(name val) : data(val), next(nullptr) {}
	};
	Node* frontNode;
	Node* backNode;
	int count;

public:
	Queue() : frontNode(nullptr), backNode(nullptr), count(0) {}

	void push(name val) {
		Node* newNode = new Node(val);
		if (backNode == nullptr) { // if no nodes when inserting
			frontNode = backNode = newNode;
		}
		else {
			backNode->next = newNode; // puts new node to the next of the current back
			backNode = newNode;
		}
		count++;
	}

	void pop() {
		if (empty()) {
			throw std::invalid_argument("queue is empty"); // if queue is empty
		}
		Node* remove = frontNode;
		frontNode = frontNode->next;
		delete remove;
		count--;
		if (frontNode == nullptr) backNode = nullptr; // if queue is empty after
	}

	name front() {
		if (empty()) throw std::invalid_argument("queue is empty");
			return frontNode->data;
	}

	int size() {
		return count;
	}

	bool empty() {
		return count == 0; 
	}

	void move_to_rear() {
		if (size() <= 1) return;
		name frontVal = front();
		pop();
		push(frontVal);
	}


};
