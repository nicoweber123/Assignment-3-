struct Node {
    int data;
    Node* next;
    Node(int d) : data(d), next(nullptr) {}
};

void insertion_sort(Node*& head) {
    Node* point = nullptr; 
    Node* current = head; 


    while (current != nullptr) {
        Node* next = current->next; 

        //find position to insert node into list
        Node* i = point;
        Node* prev = nullptr;
        bool insertionNeeded = false;

        //move until we find node thats greater
        while (i != nullptr && current->data > i->data) {
            prev = i;
            i = i->next;
        }
        // insert at beginning if null
        if (prev == nullptr) {
            current->next = point;
            point = current;
        }
        //insert between prev and i
        else {
            current->next = prev->next;
            prev->next = current;
        }

        current = next; // move to next in original list
    }

    head = point; // make head point to new list
}