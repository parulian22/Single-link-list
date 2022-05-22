#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data, key;
	Node* next;
};

void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void insertAfter(Node* prev_node, int new_data)
{

    if (prev_node == NULL) {
        cout << "The given previous node cannot be NULL";
        return;
    }
 
    Node* new_node = new Node();
    new_node->data = new_data;

    new_node->next = prev_node->next;
    prev_node->next = new_node;
}
 
void append(Node** head_ref, int new_data) 
{ 
    Node* new_node = new Node();
    Node *last = *head_ref;
    new_node->data = new_data; 
    new_node->next = NULL; 
    
    if (*head_ref == NULL) 
    { 
        *head_ref = new_node; 
        return; 
    } 
    
    while (last->next != NULL)
    {
        last = last->next; 
    }
   
    last->next = new_node; 
    return; 
} 

void printList(Node* n)
{
	while (n != NULL) {
		cout << n->data << " ";
		n = n->next;
	}
}

int main()
{
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;

	head = new Node();
	second = new Node();
	third = new Node();

	head->data = 4; 
	head->next = second; 

	second->data = 5; 
	second->next = third;

	third->data = 6; 
	third->next = NULL;

	cout << "--- Created linked list --- " << endl;
	printList(head);
	
	cout << "\n\nInsert data" << endl ;
	push(&head, 8); 
		printList(head); cout<<endl;
	
	insertAfter(head->next, 9); 
		printList(head); cout<<endl;
	
	append(&head, 10); 
		printList(head); cout<<endl;
	
	cout << "\n-- Updated linked list : " << endl ;
	printList(head);
	
	return 0;
}
