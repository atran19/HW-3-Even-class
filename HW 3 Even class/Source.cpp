////////////
//Anna Tran
//CS 172 Sec 1
//9.11 EvenNumber Class
////////////
/*
__UML DIAGRAM___
EvenNumber	    |
________________|
+value:int      |
+previous:int   |
+next:int       |
________________|
+EvenNumber()   |
+getValue()     |
+getPrevious()  |
+getNext()      |
________________|
*/

#include<iostream>
using namespace std;

class EvenNumber
{
public:
	int value;
	int Previous;
	int Next;

	EvenNumber()
	{
		value = 0;
		
	}
	EvenNumber(int x)
	{
		value = x;
		
	}
	int getValue()
	{
		return value;
	}
	int getPrevious()
	{
		int Previous = value - 2;
			return Previous;
	}
	int getNext()
	{
		int Next = value + 2;
		return Next;
	}

};

int main() {
	EvenNumber v(16);
	v.getValue();
	v.getPrevious();
	v.getNext();

	cout << "This is the value:" << v.getValue() << endl;
	cout << "This is the previous even value:" << v.getPrevious() << endl;
	cout << "This is the next even value:" <<v.getNext()<< endl;



}