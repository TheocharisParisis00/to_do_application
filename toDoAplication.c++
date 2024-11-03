#include <iostream>
#include <vector>
#include <string>

using namespace std;

class TodoList {
private:
    vector<string> tasks;

public:
    void addTask(const string& task) {
        tasks.push_back(task);
        cout << "Added task: " << task << endl;
    }

    void viewTasks() {
        if (tasks.empty()) {
            cout << "No tasks available." << endl;
            return;
        }

        cout << "Your tasks:" << endl;
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << tasks[i] << endl;
        }
    }

    void deleteTask(int index) {
        if (index < 1 || index > tasks.size()) {
            cout << "Invalid task number." << endl;
            return;
        }
        cout << "Deleted task: " << tasks[index - 1] << endl;
        tasks.erase(tasks.begin() + (index - 1));
    }
};

int main() {
    TodoList todoList;
    int choice;

    do {
        cout << "\n--- To-Do List ---" << endl;
        cout << "1. View Tasks" << endl;
        cout << "2. Add Task" << endl;
        cout << "3. Delete Task" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Clear the newline character from the input buffer

        switch (choice) {
            case 1:
                todoList.viewTasks();
                break;
            case 2: {
                string task;
                cout << "Enter the task: ";
                getline(cin, task);
                todoList.addTask(task);
                break;
            }
            case 3: {
                int taskNumber;
                cout << "Enter the task number to delete: ";
                cin >> taskNumber;
                todoList.deleteTask(taskNumber);
                break;
            }
            case 4:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}