#include<iostream>
#include<iomanip>
#include"TaskManager.h"
#include"Constants.h"

using namespace std;

int main()
{
	TaskManager manager;
	manager.loadTasks();
	int choice;

	do {
		cout << endl;
		setColor(14);
		cout<<spaces << "\x1b[1mTo-Do List Manager\x1b[0m\n";
		setColor(6);
		cout << spaces << "1. Add Task\n";
		cout << spaces << "2. View Tasks\n";
		cout << spaces << "3. Rename Task\n";
		cout << spaces << "4. Complete Task\n";
		cout << spaces << "5. Delete Task\n";
		cout << spaces << "6. Exit\n";
		cout << spaces << "Enter Choice: ";
		cout << spaces;
		cin >> choice;
		setColor(7);

		while (!cin)
		{
			cout << spaces << "Invalid input! Enter a number: ";
			cin.clear();
			cin.ignore(1000, '\n');
			cout << spaces;
			cin >> choice;
		}
		switch (choice)
		{
		case 1:
			manager.addTask();
			break;
		case 2:
			manager.viewTasks();
			break;
		case 3:
			manager.renameTask();
			break;
		case 4:
			manager.completeTask();
			break;
		case 5:
			manager.deleteTask();
			break;
		case 6: 
			manager.saveTasks();
			cout << spaces << "System Exiting!" << endl;
			break;
		default:
			cout << spaces;
			setColor(4);
			cout<< "Invalid choice!\n\n";
			setColor(7);
		}

	} while (choice != 6);
	return 0;
}