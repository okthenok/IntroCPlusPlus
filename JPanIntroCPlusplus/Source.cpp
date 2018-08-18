#include <iostream>
#include <string>


void add(int num1, int num2, int &answer)
{
	answer = num1 + num2;
}
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

int main()
{
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

	std::cout << value << std::endl;*/

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

	//learned basic pointers (does not know ->)
	int* nums = new int(5);
	

	std::cout << nums << std::endl;

	system("PAUSE");
	return 0;
}