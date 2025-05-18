#include <bits/stdc++.h>
#include "utils.cpp"
#include "aeroplane.cpp"
using namespace std;

class Technician
{
public:
    Technician(string name, int id, string expertiseModel) : name(name), id(id), expertiseModel(expertiseModel) {}
    Technician(string name) : name(name) {}

    // Getter methods
    string getName() const
    {
        return name;
    }

    int getId() const
    {
        return id;
    }

    string getExpertiseModel() const
    {
        return expertiseModel;
    }

    // Setter methods (excluding id)
    void setName(string newName)
    {
        name = newName;
    }

    void setExpertiseModel(string newModel)
    {
        expertiseModel = newModel;
    }

    void testAeroplane(string model)
    {
        cout << name << " is testing " << model << "..." << endl;
        // Utils().simulateLoading(); // Simulate loading
        // Utils().simulateDelay(); // Simulate delay
        cout << "Test completed." << endl;
    }

    void repairAeroplane(string model, string issue)
    {
        cout << name << " is repairing " << model << " due to " << issue << "..." << endl;
        // Utils().simulateLoading(); // Simulate loading
        // Utils().simulateDelay(); // Simulate delay
        cout << "Repair completed." << endl;
    }

    static Technician createTechnicianFromInput()
    {
        string name, expertiseModel;
        int id;

        cin.ignore();
        cout << "Enter Technician Name: ";
        getline(cin, name);

        cout << "Enter Technician ID: ";
        cin >> id;
        cin.ignore(); // Ignore newline character

        cout << "Enter Technician Expertise Model: ";
        getline(cin, expertiseModel);

        return Technician(name, id, expertiseModel);
    }

private:
    string name;
    int id;
    string expertiseModel;
};