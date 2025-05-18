#include <bits/stdc++.h>
#include "technician.cpp"
#include "employee.cpp"
using namespace std;

class Schedule {
public:
    Schedule(string date, string time, Aeroplane aeroplane, Technician technician, Employee employee)
        : date(date), time(time), aeroplane(aeroplane), technician(technician), employee(employee) {}

    void displaySchedule() const {
        cout << "Date: " << date << ", Time: " << time << endl;
        cout << "Aeroplane Model: " << aeroplane.getModel() << ", Serial Number: " << aeroplane.getSerialNumber() << endl;
        cout << "Technician: " << technician.getName() << " (Expertise Model: " << technician.getExpertiseModel() << ")" << endl;
        cout << "Employee: " << employee.getName() << " (Job: " << employee.getJob() << ")" << endl;
    }

    string getDate() const {
        return date;
    }

    string getTime() const {
        return time;
    }

    const Aeroplane& getAeroplane() const {
        return aeroplane;
    }

    const Technician& getTechnician() const {
        return technician;
    }

    const Employee& getEmployee() const {
        return employee;
    }

private:
    string date;
    string time;
    Aeroplane aeroplane;
    Technician technician;
    Employee employee;
};

class Airport {
public:
    Airport(string name, string location) : name(name), location(location) {}

    void addSchedule(const Schedule& schedule) {
        schedules.push_back(schedule);
    }

    void addTechnician(const Technician& technician) {
        technicians.push_back(technician);
    }

    void addAeroplane(const Aeroplane& aeroplane) {
        aeroplanes.push_back(aeroplane);
    }

    void displaySchedules(const string& date) const {
        cout << "Airport: " << name << " (" << location << ")" << endl;
        cout << "Schedules for " << date << ":" << endl;
        for (const Schedule& schedule : schedules) {
            if (schedule.getDate() == date) {
                schedule.displaySchedule();
                cout << endl;
            }
        }
    }

    // Getter methods
    const vector<Aeroplane>& getAeroplanes() const {
        return aeroplanes;
    }

private:
    string name;
    string location;
    vector<Aeroplane> aeroplanes;
    vector<Technician> technicians;
    vector<Schedule> schedules;
};

// TicketCounter class definition
class TicketCounter {
public:
    TicketCounter(const Airport& airport) : airport(airport) {}

    void displaySchedules(const string& date) const {
        airport.displaySchedules(date);
    }

    void bookTicket(const Aeroplane& aeroplane, const Technician& technician, const Employee& employee) {
        // Perform booking logic here
        cout << "Ticket booked for aeroplane " << aeroplane.getModel() << " by " << employee.getName() << endl;
    }

private:
    const Airport& airport;
};
