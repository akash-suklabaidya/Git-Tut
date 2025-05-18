#include <bits/stdc++.h>
using namespace std;

class Aeroplane {
public:
    Aeroplane(string model, int id, string serialNumber) : model(model), id(id), serialNumber(serialNumber) {}

    // Getter methods
    string getModel() const {
        return model;
    }

    int getId() const {
        return id;
    }

    string getSerialNumber() const {
        return serialNumber;
    }

    // Setter methods
    void setModel(string newModel) {
        model = newModel;
    }

    void setId(int newId) {
        id = newId;
    }

    void setSerialNumber(string newSerialNumber) {
        serialNumber = newSerialNumber;
    }
    
    static Aeroplane createAeroplaneFromInput() {
        string model, serialNumber;
        int id;

        cout << "Enter Aeroplane Model: ";
        getline(cin, model);

        cout << "Enter Aeroplane ID: ";
        cin >> id;
        cin.ignore(); // Ignore newline character

        cout << "Enter Aeroplane Serial Number: ";
        getline(cin, serialNumber);

        return Aeroplane(model, id, serialNumber);
    }

private:
    string model;
    int id;
    string serialNumber;
};