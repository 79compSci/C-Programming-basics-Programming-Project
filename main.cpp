#include <iostream>
using namespace std;

int main() {
    const double GALLONS = 20.0;
    const double MPG_TOWN = 23.5;
    const double MPG_HIGHWAY = 28.9;

    double distanceInTown = GALLONS * MPG_TOWN;
    double distanceOnHighway = GALLONS * MPG_HIGHWAY;

    cout << "Distance the car can travel in town: " << distanceInTown << " miles." << endl;
    cout << "Distance the car can travel on the highway: " << distanceOnHighway << " miles." << endl;

    return 0;
}