#include "List.h"
#include <iostream>

using namespace std;

void main()
{
	List test;

	test.nodeInsert(2);
	test.nodeInsert(5);
	test.nodeInsert(4);
	test.nodeInsert(1);
	test.nodeInsert(7);
	test.nodeInsert(3);
	test.nodeInsert(6);
	
	cout << "Here is the list" << endl;
	test.nodeDisplay();
	cout << endl;

	cout << "Appending the list" << endl;
	test.nodeAppend(8);
	test.nodeDisplay();
	cout << endl;

	cout << "Deleting 4 from the list" << endl;
	test.nodeDelete(4);
	test.nodeDisplay();
	cout << endl;

	cout << "Inserting a number into the 5th position" << endl;
	test.nodeSpecificInsert(2, 5);
	test.nodeDisplay();
	cout << endl;

	cout << "Deleting the number in the 3rd position" << endl;
	test.nodeSpecificDelete(3);
	test.nodeDisplay();
	cout << endl;


	system("pause");
}