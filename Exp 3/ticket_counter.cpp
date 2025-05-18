#include <bits/stdc++.h>
#include "airport.cpp"
using namespace std;

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