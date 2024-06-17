// This file is a To-Do list code

#include <iostream>
#include <string>

using namespace std;

//class Task for defining various tasks.
 class Task
{
    public:
    string name,description,due_date; //Task name, description, due date.
    bool status; //task completion status.

    //Constructor for initializing task
    Task(const string& name, const string& description,
         const string& due_date)
        : name(name)
        , description(description)
        , due_date(due_date)
        , status(false)
        { 
        }
    
}