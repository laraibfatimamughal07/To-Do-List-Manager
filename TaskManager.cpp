#include<fstream>
#include<string>
#include<iostream>
#include<vector>
#include "Constants.h"
#include"TaskManager.h"

void TaskManager::addTask()
{
	string t;
	cout << spaces << "Enter Task Title: ";
	cin.ignore(1000, '\n');
	cout << spaces;
	getline(cin, t);

	Task newTask(t);
	tasks.push_back(newTask);

	cout << spaces << "Task Added Successfully!" << endl;
}
void TaskManager::deleteTask()
{
	if (tasks.empty())
	{
		cout << spaces;
		setColor(4);
		cout<< "No Tasks to Delete!" << endl << endl;
		setColor(7);
		return;
	}
	viewTasks();
	cout << spaces << "Enter the task number you want to delete: ";
	int t_num;
	cout << spaces;
	cin >> t_num;

	while (t_num<1 || t_num>tasks.size())
	{
		cout << spaces;
		setColor(4);
		cout<< "Invalid Task number!\n"<<spaces<<"Please Enter Again: ";
		setColor(7);
		cout << spaces;
		cin >> t_num;
	}
	tasks.erase(tasks.begin() + (t_num - 1));
	cout << spaces << "Task Deleted Successfully!" << endl;
}
void TaskManager::completeTask()
{
	if (tasks.empty())
	{
		cout << spaces;
		setColor(4);
		cout<< "No Tasks Available!" << endl;
		setColor(7);
		return;
	}
	viewTasks();
	int t_number;
	cout << spaces << "Enter the Task number You want to mark Complete: ";
	cout << spaces;
	cin >> t_number;
	while (t_number<1 || t_number>tasks.size())
	{
		cout << spaces;
		setColor(4);
		cout<< "Invalid Task Number!\n"<<spaces<<"Please Enter Again: ";
		setColor(7);
		cout << spaces;
		cin >> t_number;
	}
	tasks[t_number - 1].markComplete();
	cout << spaces << "Task Marked Complete!" << endl;
}
void TaskManager::viewTasks()
{
	if (tasks.empty())
	{
		cout << spaces;
		setColor(4);
		cout<< "No Tasks Available to View!" << endl << endl;
		setColor(7);
		return;
	}

	cout << spaces << "\x1b[1mAll Tasks\x1b[0m\n";
	for (int i = 0;i < tasks.size();i++)
	{
		cout << spaces << i + 1;
		tasks[i].display();
	}
}
void TaskManager::saveTasks()
{
	ofstream file("tasks.txt");
	if (!file)
	{
		cout << spaces;
		setColor(4);
		cout<< "Can not open File!" << endl;
		setColor(7);
		return;
	}
	for (const Task& task : tasks)
	{
		file << task.getTitle()<< "|"<< task.isCompleted()<< endl;
	}
	file.close();
	cout << spaces << "Tasks Saved!" << endl;
}
void TaskManager::loadTasks()
{
	ifstream file("tasks.txt");
	if (!file)
	{
		cout << spaces;
		setColor(4);
		cout<< "Can not open File!" << endl;
		setColor(7);
		return;
	}
	string line;
	while (getline(file, line))
	{
		int posi = line.find('|');
		string t = line.substr(0, posi);
		string s = line.substr(posi + 1);
		Task task(t);
		if (s == "1")
		{
			task.setCompleted(true);
		}
		else
		{
			task.setCompleted(0);
		}
		tasks.push_back(task);
	}
	file.close();
}
void TaskManager::renameTask()
{
	viewTasks();
	int choice;
	cout << spaces << "Enter Task no you want to rename: ";
	cout << spaces;
	cin >> choice;
	while (choice<1 || choice>tasks.size())
	{
		cout << spaces;
		setColor(4);
		cout<< "Invalid Number!\n"<<spaces<<"Please Enter Again: ";
		setColor(7);
		cin >> choice;
	}
	tasks[choice - 1].setTitle();
	cout << spaces << "Task Renamed Sucessfully!" << endl;
}