#pragma once

#include<vector>
#include<iostream>
#include"Task.h"

class TaskManager {
private:
	vector<Task>tasks;
public:
	void addTask();
	void deleteTask();
	void completeTask();
	void viewTasks();

	void saveTasks();
	void loadTasks();
	void renameTask();

};