# To Do List Manager
A console-based To-Do List Manager developed in C++ using Object-Oriented Programming principles. This application allows users to organize their daily tasks by adding, viewing, renaming, completing, and deleting tasks. Task data is automatically saved to a file, ensuring that tasks persist between program executions.

## Overview
Managing tasks efficiently is an important part of productivity. This project was developed to provide a simple yet practical task management system that runs entirely in the terminal.
The application demonstrates the use of:
* Object-Oriented Programming (OOP)
* Class Design
* File Handling
* Dynamic Data Storage using STL Vectors
* Modular Programming with Header and Source Files
* Console Formatting and Color Management

The project is intentionally lightweight while still showcasing several core C++ concepts commonly taught in introductory and intermediate programming courses.

## Features

### 1. Add Tasks
Users can create new tasks by entering a title. Newly created tasks are automatically marked as **Pending**.
### 2. View Tasks
Displays all tasks currently stored in the system, along with their completion status.
Example:
```text
1. Complete Assignment [Pending]
2. Submit Project Report [Completed]
3. Prepare Presentation [Pending]
```
### 3. Rename Tasks
Allows modification of an existing task title without affecting its completion status.
### 4. Complete Tasks
Users can mark tasks as completed once they finish them.
### 5. Delete Tasks
Removes tasks permanently from the task list.
### 6. Persistent Storage
Tasks are saved to a text file when the program exits and are automatically loaded the next time the application starts.
### 7. Colored Console Interface
Different colors are used to improve readability and highlight important messages such as errors and menu headings.

## Project Architecture
The project follows a modular design and separates responsibilities among different classes.
### Task Class
The `Task` class represents a single task in the system.
Each task contains:
* A title
* A completion status
Responsibilities:

* Store task information
* Display task details
* Update task title
* Mark tasks as completed
This class serves as the basic building block of the application.
### TaskManager Class
The `TaskManager` class controls the overall behavior of the application.
Responsibilities:
* Managing the collection of tasks
* Handling user operations
* File storage and retrieval
* Validation of user input
Tasks are stored internally using:
```cpp
vector<Task> tasks;
```
Using a vector allows dynamic growth and efficient management of task records.
---
### Constants and Utilities
The project includes a dedicated constants file that stores:
* Console color values
* Formatting helpers
* Utility functions for changing text colors
This approach improves maintainability by centralizing commonly used values.
---
## Error Handling
The application performs validation for common user mistakes, including:
* Invalid menu selections
* Invalid task numbers
* Non-numeric menu input
* Empty task lists
This helps prevent crashes and improves overall usability.
---
## Concepts Demonstrated
This project demonstrates practical usage of:
### Object-Oriented Programming
* Classes
* Objects
* Encapsulation
* Separation of responsibilities
## Future Enhancements
Possible improvements include:
* Task priorities
* Due dates and reminders
* Search functionality
* Task categories
* Sorting and filtering
* Cross-platform color support
* Graphical User Interface (GUI)
* Database integration
---
