#ifndef TODOCLASS
#define TODOCLASS

#include <iostream>
#include <string>

using namespace std;

//& create a class to create and delete objects within the todo list

class TodoList
{
public:
	TodoList();
	~TodoList();
protected:
	void CreateTodo();
	std::string listname;
	// variables:
	std::string ListName;
	std::string Details;
	char AddChoice;
};

void TodoList::CreateTodo()
{
	// ask the user to what to name the todo objects
	std::cout << "What do you wish to name the new todo list?" << std::endl;

	// take input
	std::cin >> ListName;

	// ask user for details about the todolist
	std::cout << "Do you wish to add an item to the list?" << std::endl;
	std::cout << "y or n" << std::endl;
	std::cin >> AddChoice;
	while (AddChoice != 'y' || 'Y' || 'n' || 'N')
	{
		std::cout << "The Value enter was not within the range of variable option. \nChoose a letter within the required range. ";
		std::cin >> AddChoice;
	}
	if (AddChoice == 'y' || 'Y')
	{
		//^adds a todo to the list within the todo
	}
	e lse
	/
		//^does not add a todo to the list
		break;
	}
}

#endif
