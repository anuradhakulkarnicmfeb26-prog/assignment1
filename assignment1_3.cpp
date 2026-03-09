#include <iostream>
#include <string>

using namespace std;

class TollBooth {
private:
    int totalVehicles;
    double totalRevenue;

public:
    // Constructor to initialize values
    TollBooth() {
        totalVehicles = 0;
        totalRevenue = 0.0;
    }

    // Resets both totalVehicles and totalRevenue to zero
    void reset() {
        totalVehicles = 0;
        totalRevenue = 0.0;
        cout << "Statistics have been reset." << endl;
    }

    // Increments vehicle count and adds toll amount
    void vehiclePayingToll(int vehicleType, double tollAmount) {
        totalVehicles++;
        totalRevenue += tollAmount;
        
        string type = (vehicleType == 1) ? "Car" : (vehicleType == 2) ? "Truck" : "Bus";
        cout << type << " passed. Toll collected: Rs." << tollAmount << endl;
    }

    // Getters
    int getTotalVehicles() { return totalVehicles; }
    double getTotalRevenue() { return totalRevenue; }
};

int main() {
    TollBooth booth;
    int choice;

    // Fixed toll amounts
    const double CAR_TOLL = 180.0;
    const double TRUCK_TOLL = 250.0;
    const double BUS_TOLL = 350.0;

    while (true) {
        cout << "\n--- Toll Booth Simulation ---" << endl;
        cout << "1. Add Standard Car (Rs. 180)" << endl;
        cout << "2. Add Truck (Rs. 250)" << endl;
        cout << "3. Add Bus (Rs. 350)" << endl;
        cout << "4. Display Total Vehicles Passed" << endl;
        cout << "5. Display Total Revenue Collected" << endl;
        cout << "6. Reset Booth Statistics" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            booth.vehiclePayingToll(1, CAR_TOLL);
        } 
        else if (choice == 2) {
            booth.vehiclePayingToll(2, TRUCK_TOLL);
        } 
        else if (choice == 3) {
            booth.vehiclePayingToll(3, BUS_TOLL);
        } 
        else if (choice == 4) {
            cout << "Total vehicles passed: " << booth.getTotalVehicles() << endl;
        } 
        else if (choice == 5) {
            cout << "Total revenue: Rs." << booth.getTotalRevenue() << endl;
        } 
        else if (choice == 6) {
            booth.reset();
        } 
        else if (choice == 7) {
            cout << "Exiting system..." << endl;
            break;
        } 
        else {
            cout << "Invalid selection!" << endl;
        }
    }

    return 0;
}