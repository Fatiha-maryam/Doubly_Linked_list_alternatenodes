#pragma once
#include"node.h"
class DoubleList
{  public:
	node* head;
	DoubleList();
	bool isempty();
	void add_node(int x);
	void display();
	void display_alternatenode();
};

