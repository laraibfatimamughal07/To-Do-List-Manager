#pragma once

#include<string>
#include<iostream>

using namespace std;
class Task {
private:
	string title;
	bool status;
public:
	Task();
	Task(string t);

	string getTitle() const;
	void setTitle();

	bool isCompleted() const;
	void markComplete();
	void display() const;

	void setCompleted(bool st);

};