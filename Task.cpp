#include<string>
#include"Task.h"
#include"Constants.h"

Task::Task()
{
	title = "";
	status = false;
}
Task::Task(string t)
{
	title = t;
	status = 0;
}
string Task:: getTitle() const
{
	return title;
}
bool Task::isCompleted() const
{
	return status;
}
void Task::markComplete()
{
	status = 1;
}
void Task::display() const
{
	cout << ". " << title;
	if (status == 1)
	{
		cout << " [Completed]"<<endl;
	}
	else
	{
		cout << " [Pending]" << endl;
	}
}
void Task::setTitle()
{
	string t;
	cin.ignore(1000, '\n');
	cout << spaces << "Enter the new Task Title: ";
	cout << spaces;
	getline(cin, t);
	title = t;
}
void Task::setCompleted(bool status)
{
	this->status = status;
}