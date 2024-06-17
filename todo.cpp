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
        : name(name), 
        description(description),
        due_date(due_date),
        status(false){}

        void setDescription(const string &description){
            this->description=description;
        }
        void setDueDate(const string& due_date)
        {
            this->due_date = due_date;
        }

        // Mark the task as completed
        void markCompleted() { status = true; }
        
        // Display task details
        void displayTask() const
        {
            cout << name << "("<< (status ? "Completed" : "Pending")<< ") - Due: " << due_date <<"\n"<< "   Description: " << description << endl;
        }
};

//Now a TO-DO list class
class Todolist{
    
};
