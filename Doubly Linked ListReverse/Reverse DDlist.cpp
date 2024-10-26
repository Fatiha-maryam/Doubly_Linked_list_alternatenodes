#include"node.h"
#include"DoubleList.h"
int main()
{
	DoubleList obj;
	obj.add_node(3);
	obj.add_node(5);
	obj.add_node(9);
	obj.add_node(4);
	obj.add_node(2);
	obj.add_node(0);
	obj.add_node(1);
	obj.add_node(7);
	cout << "\n The original Doubly LinkedList is : " << endl;
	obj.display();
	cout << "\n The alternate nodes of Doubly Linked List are : " << endl;
	obj.display_alternatenode();

}