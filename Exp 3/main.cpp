#include <bits/stdc++.h>
#include "airport.cpp"
using namespace std;

class Main {
    public:
    static void airportRelatedOperations();
    static void technicianOperations();
    static void aeroplaneOperations();
};

int main() {
    int option;
    while (true) {
        cout 
            << "---------------------------------------------" << endl
            << "----------AIRPORT MANAGEMENT SYSTEM----------" << endl
            << "---------------------------------------------" << endl;
        cout << "1. Airport Operations" << endl;
        cout << "2. Technician Operations" << endl;
        cout << "3. Ticket Counter Operations" << endl;
        cout << "4. Exit" << endl;
        cout << "> ";
        cin >> option;
        switch (option)
        {
        case 1: {
            Main::airportRelatedOperations();
            break;
        }
        case 2: {
            Main::technicianOperations();
            break;
        }
        default:
            break;
        }
    }
    
    return 0;
}

void Main::airportRelatedOperations() {
    string name, location;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter location: ";
    cin >> location;
    Airport airport(name, location);

    int option;
    while (true) {
        cout << "1. Add technician" << endl;
        cout << "2. Add aeroplane" << endl;
        cout << "3. Exit" << endl;
        cout << "> ";
        cin >> option;
        switch (option) {
            case 1: {
                Technician tech = Technician::createTechnicianFromInput();
                airport.addTechnician(tech);
                break;
            }
            case 2: {
                Aeroplane aeroplane = Aeroplane::createAeroplaneFromInput();
                airport.addAeroplane(aeroplane);
                break;
            }
            case 3:
                return;
            default:
                break;
        }
    }
}

void Main::technicianOperations() {
    string t_name;
    cout << "Enter name: ";
    cin >> t_name;
    Technician technician(t_name);
    int option;
    while (true) {
        cout << "1. Add new technician" << endl;
        cout << "2. Repair Aeroplane" << endl;
        cout << "3. Test Aeropllane" << endl;
        cout << "4. Exit" << endl;
        cout << "> ";
        cin >> option;
        switch (option) {
            case 1: {
                technician = Technician::createTechnicianFromInput();
                break;
            }
            case 2: {
                string model, issue;
                cout << "Enter model: ";
                cin >> model;
                cout << "Enter issue: ";
                cin >> issue;
                technician.repairAeroplane(model, issue);
                break;
            }
            case 3: {
                string model;
                cout << "Enter model: ";
                cin >> model;
                technician.testAeroplane(model);
                break;
            }
            case 4:
                return;
            default:
                break;
        }
    }
}

void Main::aeroplaneOperations() {
    
}