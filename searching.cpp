#include <bits/stdc++.h>
using namespace std;

class Node
{
	public:
	int key;
	Node* next;
};

void push(Node** head_ref, int new_key)
{
	Node* new_node = new Node();
	new_node->key = new_key;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

bool search(Node* head, int x)
{
	Node* current = head; 
	while (current != NULL)
	{
		if (current->key == x)
			return true;
		current = current->next;
	}
	return false;
}

int main()
{

	Node* head = NULL;
	int x = 3;

	push(&head, 11);
	push(&head, 7);
	push(&head, 3);
	push(&head, 14);
	push(&head, 7);

	cout << "Apakah 3 ada di linked list? " << endl;
	search(head, 3)? cout<<"Ya" : cout<<"Tidak";
	
	return 0;
}
