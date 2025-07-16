#include "Question 1.h"
using namespace std;

int main() {
	Queue<int> q;

	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);
	q.push(60);
	q.push(70);
	q.push(80);
	q.push(90);
	q.push(100);

	cout << "Front: " << q.front() << endl;
	cout << "Size: " << q.size() << endl;

	q.pop();
	cout << "front after popping: " << q.front() << endl;

	cout << "Is the queue empty: " << (q.empty() ? "yes" : "No") << endl;

	q.move_to_rear();
	cout << "Front after move_to_rear: " << q.front() << endl;

	cout << "Size: " << q.size() << endl;
}

