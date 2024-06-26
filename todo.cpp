// This file is a To-Do list code

#include <iostream>
#include <string>
#include <vector>

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
        
        //set name
        void setName(const string& name) { this->name = name; }

        // Display task details
        void displayTask() const
        {
            cout << name << "("<< (status ? "Completed" : "Pending")<< ") - Due: " << due_date <<"\n"<< "   Description: " << description << endl;
        }
};

//Now a TO-DO list class
class Todolist{
    private :
    vector <Task> tasks;
    public :

    //displays menu for the options that the list does.

    void displaymenu(){
        cout<<"\n----------- TO DO LIST ----------\n"<<endl;
        cout<<"1. Add task."<<endl;
        cout<<"2. Remove task."<<endl;
        cout<<"3. Display task."<<endl;
        cout<<"4. Mark task as done."<<endl;
        cout<<"5. Edit task details."<<endl;
        cout<<"6. Exit TO-DO list."<<endl;
    }

    //Add a new task
    void addtask(){
        string name, description, due_date;
        cout<< "Enter Task name : ";
        cin.ignore();
        getline(cin, name);         //inputs name of task
        cout<<"Enter task description :"<<endl;
        getline(cin, description);
        cout << "Enter task due date (YYYY-MM-DD): ";
        getline(cin, due_date);
        tasks.emplace_back(name, description, due_date);
        cout << "Task added successfully!" << endl;
    }
    //delete task
    void deletetask(){
        if (tasks.empty()) {
            cout << "No tasks to delete!" << endl; //checks if task exist or not.
            return;
        }
        cout << "Tasks:" << endl;
        for (int i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << tasks[i].name<< endl;
        }
        cout << "Enter the task number to delete: ";
        int taskNumber;
        cin >> taskNumber;
        if (taskNumber >= 1 && taskNumber <= tasks.size()) {
            tasks.erase(tasks.begin() + taskNumber - 1);
            cout << "Task deleted successfully!" << endl;
        }
        else {
            cout << "Invalid task number!" << endl;
        }
    }
    //Display all tasks in the list.

    void displaytasks(){
        if(tasks.empty())
        cout<<"No tasks to be deleted."<<endl;
        else{
            cout << "Tasks:" << endl;
            for (int i = 0; i < tasks.size(); ++i) {
                cout << i + 1 << ". ";
                tasks[i].displayTask();
            }
        }
    }

    //marking a task as completed

    void markcompleted(){
        if(tasks.empty())
        cout<<"No tasks.";
        else{
            for (int i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << tasks[i].name<< endl;
            }
        unsigned int tno;
        cout<<"Enter task number which has been completed. :"<<endl;
        cin>>tno;
        if (tno <= tasks.size()) {
            tasks[tno - 1].markCompleted();
            cout << "Task marked as completed!" << endl;
            }
        else
            cout<<"Invalid Task number\n";    
        }
    }

    //edit a task.

    void editTask(){
        if (tasks.empty()) {
            cout << "No tasks to edit!" << endl;
            return;
        }
        cout << "Tasks:" << endl;
        for (int i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << tasks[i].name<< endl;
        }
        cout << "Enter the task number to edit: ";
        int taskNumber;
        cin >> taskNumber;
        if (taskNumber >= 1 && taskNumber <= tasks.size()) {
            Task& task = tasks[taskNumber - 1];
            string name, description, due_date;
            cout << "Enter new task name (current: "<< task.name << "): ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter new task description (current: "<< task.description << "): ";
            getline(cin, description);
            cout << "Enter new task due date (current: "<< task.due_date << "): ";
            getline(cin, due_date);

            task.setName(name);
            task.setDescription(description);
            task.setDueDate(due_date);
            cout << "Task updated successfully!" << endl;
        }
        else {
            cout << "Invalid task number!" << endl;
        }
    }

};

//main function

int main()
{
    Todolist todo;
    int ch=-1;
    while(ch!=6){
        todo.displaymenu();
        cout<<"Enter your choice : ";
        cin>>ch;
        switch (ch) {
            case 1:
                todo.addtask();
                break;
            case 2:
                todo.deletetask();
                break;
            case 3:
                todo.displaytasks();
                break;
            case 4:
                todo.markcompleted();
                break;
            case 5:
                todo.editTask();
                break;
            case 6:
                cout << "Exiting program. Bye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again!"
                     << endl;
        }
    }
return 0;
}    

