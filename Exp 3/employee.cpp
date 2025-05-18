#include <bits/stdc++.h>
using namespace std;

class Employee {
public:
    Employee(string name, int id, string job) : name(name), id(id), job(job) {}

    // Getter methods
    string getName() const {
        return name;
    }

    int getId() const {
        return id;
    }

    string getJob() const {
        return job;
    }

    // Setter methods
    void setName(string newName) {
        name = newName;
    }

    void setId(int newId) {
        id = newId;
    }

    void setJob(string newJob) {
        job = newJob;
    }

    // Method to take input from command line and create an Employee object
    static Employee createEmployeeFromInput() {
        string name, job;
        int id;

        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Employee ID: ";
        cin >> id;
        cin.ignore(); // Ignore newline character

        cout << "Enter Employee Job: ";
        getline(cin, job);

        return Employee(name, id, job);
    }

private:
    string name;
    int id;
    string job;
};