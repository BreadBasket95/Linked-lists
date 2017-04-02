#ifndef LIST_H
#define LIST_H
class List
{
private:
	struct Node
	{
		int package;
		Node *next;
	};
	Node *head;
public:
	List()
	{
		head = nullptr;
	};
	void nodeAppend(int);
	void nodeDelete(int);
	void nodeInsert(int);
	void nodeDisplay();
	void nodeSpecificInsert(int, int);
	void nodeSpecificDelete(int);
};
#endif
