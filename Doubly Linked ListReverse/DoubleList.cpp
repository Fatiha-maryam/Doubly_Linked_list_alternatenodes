#include "DoubleList.h"
DoubleList::DoubleList()
{
	head = NULL;
}
bool DoubleList::isempty()
{
	if (head == NULL)
		return true;
	else
		return false;

}
void DoubleList::add_node(int x)
{
	node* newnode = new node;
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	if (isempty())
	{
		head = newnode;
	}
	else
	{
		node* temp = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		newnode->prev = temp;
		temp->next = newnode;
	}
}
void DoubleList::display_alternatenode()
{
	if (isempty())
	{
		cout << "List is empty " << endl;
	}
	else
	{

		node* temp = head;
		while (temp != NULL)
		{
			cout << temp->data << "->";
			temp = temp->next->next;
		}
		cout << "NULL";
	}


}
void DoubleList::display()
{
	if (isempty())
	{
		cout << "\n The Double linked list is empty " << endl;
	}
	else
	{
		node* temp = head;
		while (temp!= NULL)
		{
			cout << temp->data << "->";
			temp = temp->next;
		}
		cout << "NULL";
	}
}