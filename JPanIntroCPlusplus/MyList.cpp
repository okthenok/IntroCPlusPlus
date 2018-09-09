#include "MyList.h"

void printString(string* str) {
}

MyList::MyList()
{
	length = 0;
	list = make_unique<string[]>(length);
	running = true;
}

void MyList::AddItem(string item)
{
	unique_ptr<string[]> temp = make_unique<string[]>(length + 1);
	for (int i = 0; i < length; i++)
	{
		temp[i] = list[i];
	}
	temp[length] = item;
	list = move(temp);
	length++;
}
void MyList::RemoveItem(int item)
{
	unique_ptr<string[]> temp = make_unique<string[]>(length - 1);
	for (int i = 0; i < length - 1; i++)
	{
		if (i < item)
		{
			temp[i] = list[i];
		}
		else
		{
			temp[i] = list[i + 1];
		}
	}
	list = move(temp);
	length--;
}

void MyList::ShowList()
{
	for (int i = 0; i < length; i++)
	{
		printString(list.get());
		cout << to_string(i + 1) + ". " + list[i] << endl;
	}
}

void MyList::Exit()
{
	running = false;
}
