#include <bits/stdc++.h>
using namespace std;

class Passenger {
public:
    Passenger(string name, int id, string ticketId) : name(name), id(id), ticketId(ticketId) {}

    // Getter methods
    string getName() const {
        return name;
    }

    int getId() const {
        return id;
    }

    string getTicketId() const {
        return ticketId;
    }

    // Setter methods
    void setName(const string& newName) {
        name = newName;
    }

    void setId(int newId) {
        id = newId;
    }

    void setTicketId(const string& newTicketId) {
        ticketId = newTicketId;
    }

private:
    string name;
    int id;
    string ticketId;
};