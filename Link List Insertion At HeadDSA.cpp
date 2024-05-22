#include<iostream>
using namespace std;

class node
{
public:
	int data;
	node* next;

	node(int d)
	{
		data = d;
		next = NULL;
	}

	void insertAthead(node*& head, int d)
	{
		node* temp = new node(d);

		temp->next = head;
		head = temp;
	}

	void display(node*& head)
	{
		node* temp = head;
		while (temp != NULL)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
	}
};

void main()
{
	node* node1 = new node(5);
	node* node2 = new node(3);
	node* node3 = new node(4);
	node* head;
	head = node1;
	node1->next = node2;
	node2->next = node3;
	node1->insertAthead(head, 10);
	node1->display(head);
}