#include "bits/stdc++.h"
#include "airport.cpp"
using namespace std;

class CheckingCounter {
public:
    CheckingCounter(const Airport& airport) : airport(airport) {}

    void checkInPassenger(const string& ticketId, const string& passengerName) {
        // Simulate checking logic
        cout << "Checking in passenger " << passengerName << " with ticket ID " << ticketId << endl;
        cout << "Ticket verification: ";
        if (verifyTicket(ticketId)) {
            cout << "Verified" << endl;
        } else {
            cout << "Invalid ticket" << endl;
        }
    }

private:
    const Airport& airport;

    bool verifyTicket(const string& ticketId) {
        // Simulate ticket verification (dummy logic)
        return ticketId.length() > 5; // Just a dummy condition for demonstration
    }
};