#include "List.h"
#include <iostream>

using namespace std;

void List::nodeSpecificDelete(int pos)
{
	int count = 0;
	Node *nodePtr;
	Node *priorNode;
	priorNode = nullptr;
	if (!head)
		return;
	if (pos == 0)
	{
		nodePtr = head->next;
		delete head;
		head = nodePtr;
	}
	else
	{
		nodePtr = head;
		while (nodePtr != nullptr && count < (pos - 1))
		{
			priorNode = nodePtr;
			nodePtr = nodePtr->next;
			count++;
		}
		if (nodePtr)
		{
			priorNode->next = nodePtr->next;
			delete nodePtr;
		}
	}


};

void List::nodeSpecificInsert(int num, int pos)
{
	int count = 0;
	Node *newNode;
	Node *nodePtr;
	Node *priorNode = nullptr;
	newNode = new Node;
	newNode->package = num;
	if (!head)
	{
		head = newNode;
		newNode->next = nullptr;
	}
	else
	{
		nodePtr = head;
		priorNode = nullptr;
		while (nodePtr != nullptr &&  count < (pos - 1))
		{
			count++;
			priorNode = nodePtr;
			nodePtr = nodePtr->next;
			
		}
		if (priorNode == nullptr)
		{
			head = newNode;
			newNode->next = nodePtr;
		}
		else
		{
			priorNode->next = newNode;
			newNode->next = nodePtr;
		}
	}
};
void List::nodeInsert(int num)
{
	Node *newNode;
	Node *nodePtr;
	Node *priorNode = nullptr;
	newNode = new Node;
	newNode->package = num;
	if(!head)
	{
		head = newNode;
		newNode->next = nullptr;
	}
	else
	{
		nodePtr = head;
		priorNode = nullptr;
		while (nodePtr != nullptr && nodePtr->package < num)
		{
			priorNode = nodePtr;
			nodePtr = nodePtr->next;
		}
		if(priorNode == nullptr)
		{
			head = newNode;
			newNode->next = nodePtr;
		}
		else
		{
			priorNode->next = newNode;
			newNode->next = nodePtr;
		}
	}

};
void List::nodeDelete(int num)
{
	Node *nodePtr;
	Node *priorNode;
	priorNode = nullptr;
	if (!head)
		return;
	if (head->package == num)
	{
		nodePtr = head->next;
		delete head;
		head = nodePtr;
	}
	else
	{
		nodePtr = head;
		while (nodePtr != nullptr && nodePtr->package != num)
		{
			priorNode = nodePtr;
			nodePtr = nodePtr->next;
		}
		if (nodePtr)
		{
			priorNode->next = nodePtr->next;
			delete nodePtr;
		}
	}
};
void List::nodeAppend(int num)
{
	Node *newNode;
	Node *nodePtr;
	newNode = new Node;
	newNode->package = num;
	newNode->next = nullptr;

	if (!head)
		head = newNode;
	else
	{
		nodePtr = head;
		while (nodePtr->next)
			nodePtr = nodePtr->next;
		nodePtr->next = newNode;
	}
};
void List::nodeDisplay()
{
	if (!head)
		cout << "Oi M8 no list" << endl;
	

	for (Node *nodePtr = head; nodePtr; nodePtr = nodePtr->next)
	{
	
			cout << nodePtr->package;
	}
}
