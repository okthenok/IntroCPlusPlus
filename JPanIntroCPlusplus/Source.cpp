#include <iostream>
#include <string>
#include "MyList.h"



void subtract(int num1, int num2, int &answer)
{
	answer = num1 - num2;
}
void multiply(int num1, int num2, int &answer)
{
	answer = num1 * num2;
}
void divide(int num1, int num2, int &answer)
{
	answer = num1 / num2;
}

struct person
{
	std::string name;
	int age;
};

void add(int number1, int number2, int& answer);

int main()
{
	//int * pointer = (int*)calloc(100000000, 4);
	//system("pause");
	//free(pointer);
	//int x = 5;

	/*int *y = new int(10);

	std::cout << *y << std::endl;

	delete y;*/

	#pragma region oldStuff 
	/*int num = 5;
	std::string text = "";

	std::cout << "Hello World!" << std::endl;
	std::cin >> text;

	std::cout << std::to_string(num) + " Hahahahaha " + text << std::endl;*/

	/*std::string name = "";
	std::string adjective = "";
	std::string noun = "";
	int age = 0;
	std::cout << "Insert a name:" << std::endl;
	std::cin >> name;
	std::cout << "Insert an adjective:" << std::endl;
	std::cin >> adjective;
	std::cout << "Insert a noun:" << std::endl;
	std::cin >> noun;
	std::cout << "Insert a number:" << std::endl;
	std::cin >> age;
	std::cout << "Hello, my name is " + name + " and I am a " + adjective + " " + noun + ". I am " + std::to_string(age) + " years old." << std::endl;*/

	/*int num1 = 0;
	int num2 = 0;
	int value = 0;
	char op = ' ';

	std::cout << "Insert an operator: +, -, *, /" << std::endl;
	std::cin >> op;

	std::cout << "Insert the first number:" << std::endl;
	std::cin >> num1;

	std::cout << "Insert the second number:" << std::endl;
	std::cin >> num2;

	switch (op)
	{
	case '+':
	add(num1, num2, value);
	break;
	case '-':
	subtract(num1, num2, value);
	break;
	case '*':
	multiply(num1, num2, value);
	break;
	case '/':
	divide(num1, num2, value);
	break;
	default:
	std::cout << "Invalid input" << std::endl;
	break;
	}

	std::cout << value << std::endl;

	/*std::string usernames[5];
	std::string passwords[5];
	std::string input = "";
	int accounts = 0;
	bool running = true;
	while (running)
	{
	std::cout << "Login, or make an account? (login/create)" << std::endl;
	std::cin >> input;
	if (input == "login")
	{
	std::cout << "Username: ";
	std::cin >> input;
	for (int i = 0; i < 5; i++)
	{
	if (usernames[i] == input)
	{
	std::cout << "Password: ";
	std::cin >> input;
	if (passwords[i] == input)
	{
	std::cout << "Login successful" << std::endl;
	break;
	}
	else
	{
	std::cout << "Invalid password, please try again" << std::endl;
	break;
	}
	}
	else
	{
	std::cout << "Invalid username, please try again" << std::endl;
	break;
	}
	}
	}
	if (input == "create")
	{
	std::cout << "Make a username" << std::endl;
	std::cin >> input;
	usernames[accounts] = input;
	std::cout << "Make a password" << std::endl;
	std::cin >> input;
	passwords[accounts] = input;
	accounts++;
	}
	}*/
	/*//learned basic pointers (does not know ->)
	int* nums = new int(5);

	person* thing = new person();
	(*thing).name = "alex";
	thing->name = "alex";

	std::cout << thing << std::endl;

	system("PAUSE");
	return 0;*/
#pragma endregion	

	#pragma region oldShoppingList
	/*int length = 0;
	std::string* list = new std::string[length];	
	bool running = true;
	std::string input = "";
	while (running)
	{
		std::cout << "Shopping list: \n1. Add item \n2. Remove item \n3. Show list \n4. Exit" << std::endl;
		std::cin >> input;
		if (input == "1")
		{			
			std::cout << "Input an item" << std::endl;
			std::cin >> input;

			std::string* temp = new std::string[length + 1];

			for (int i = 0; i < length; i++)
			{
				temp[i] = list[i];
			}

			temp[length] = input;
			list = temp;

			length++;
		}
		else if (input == "2")
		{
			std::cout << "Choose an item to remove" << std::endl;
			for (int i = 1; i < length + 1; i++)
			{
				std::cout << std::to_string(i) + ". " + list[i - 1] << std::endl;
			}
			std::cin >> input;
			for (int i = 0; i < length; i++)
			{
				if (i == std::stoi(input) - 1)
				{
					std::string* temp = new std::string[length - 1];
					for (int j = 0; j < length - 1; j++)
					{
						if (j < i)
						{
							temp[j] = list[j];
						}
						else
						{
							list[j] = list[j + 1];
						}
					}
				}
			}
			length--;
		}
		else if (input == "3")
		{
			for (int i = 1; i < length + 1; i++)
			{
				std::cout << std::to_string(i) + ". " + list[i - 1] << std::endl;
			}
		}
		else if (input == "4")
		{
			return 0;
		}
	}*/

#pragma endregion

	MyList shoppingList;
	while (shoppingList.running)
	{
		string input = "";
		std::cout << "Shopping list: \n1. Add item \n2. Remove item \n3. Show list \n4. Exit" << std::endl;
		std::cin >> input;
		if (input == "1")
		{
			std::cout << "Input an item" << std::endl;
			std::cin >> input;
			shoppingList.AddItem(input);
		}
		else if (input == "2")
		{
			std::cout << "Choose an item to remove" << std::endl;
			for (int i = 1; i < shoppingList.length + 1; i++)
			{
				std::cout << std::to_string(i) + ". " + shoppingList.list[i - 1] << std::endl;
			}
			std::cin >> input;
			shoppingList.RemoveItem(stoi(input) - 1);
		}
		else if (input == "3")
		{
			shoppingList.ShowList();
		}
		else if (input == "4")
		{
			shoppingList.Exit();
		}
		input = "";
	}
	return 0;
}


void add(int num1, int num2, int &answer)
	{
		answer = num1 + num2;
	}