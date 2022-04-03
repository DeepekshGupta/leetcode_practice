// A simple C++ program for traversal of a linked list
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

// This function prints contents of linked list
// starting from the given node
void printList(Node* n)
{
	while (n != NULL) {
		cout <<"data: " <<n->data << " next: " <<n->next<<" self address: " <<n<<endl;
		n = n->next;
	}
}

void printList2(Node* n)
{   Node* fast = n;
    Node* slow = n;
	while (fast != NULL && fast->next != NULL) {
		fast = fast->next->next;
		slow = slow->next;
		cout <<"slow->next: " <<slow->data << " fast->next: " <<fast->data<<" fast->next->next: " <<fast->next->data<<" slow: " <<slow<<" fast: " <<fast<<endl;


	}
	cout<<
}


// Driver code
int main()
{
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;
	Node* fourth = NULL;
	Node* fifth = NULL;
	Node* sixth = NULL;
	Node* seventh = NULL;
	Node* eight = NULL;
	Node* nine = NULL;
	Node* ten = NULL;
	Node* eleven = NULL;
	Node* twelve = NULL;
	Node* thirteen = NULL;

	// allocate 3 nodes in the heap
	head = new Node();
	second = new Node();
	third = new Node();
	fourth = new Node();
	fifth = new Node();
	sixth = new Node();
	seventh = new Node();
	eight = new Node();
	nine = new Node();
	ten = new Node();
	eleven = new Node();
	twelve = new Node();
	thirteen = new Node();

	head->data = 1; // assign data in first node
	head->next = second; // Link first node with second

	second->data = 2; // assign data to second node
	second->next = third;

	third->data = 3; // assign data to third node
	third->next = fourth;
	
	fourth->data = 4; // assign data to second node
	fourth->next = fifth;

	fifth->data = 5; // assign data to third node
	fifth->next = sixth;
	
	sixth->data = 6; // assign data to second node
	sixth->next = seventh;

	seventh->data = 7; // assign data to third node
	seventh->next = eight;
	
	eight->data = 8; // assign data to second node
	eight->next = nine;
	
	nine->data = 9; // assign data to second node
	nine->next = ten;

	ten->data = 10; // assign data to third node
	ten->next = eleven;
	
	eleven->data = 11; // assign data to second node
	eleven->next = twelve;
	
	twelve->data = 12; // assign data to second node
// 	twelve->next = thirteen;
	twelve->next = NULL;

	
// 	thirteen->data = 13; // assign data to second node
// 	thirteen->next = NULL;


// 	printList(head);
	
	Node* temp = head;
	printList(temp);

    cout<<endl;
    printList2(temp);
//     cout<<head<<endl;
// 	cout<<"head->next: "<<head->next<<endl;
// 	cout<<"head->next->next: "<<head->next->next<<endl;

	return 0;
}

// This is code is contributed by rathbhupendra
