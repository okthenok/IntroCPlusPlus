#pragma once
#include <iostream>
#include <string>
#include <memory>
using namespace std;

class MyList
{
public:
	MyList();
	int length;
	unique_ptr<string[]> list;
	bool running;
	void AddItem(string item);
	void RemoveItem(int item);
	void ShowList();
	void Exit();
private:

};

