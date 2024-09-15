#include <iostream>
using namespace std;

int main() {
    const int TOTAL_CUSTOMERS = 16500;
    const double PERCENT_ENERGY_DRINKERS = 0.15;
    const double PERCENT_CITRUS_DRINKERS = 0.58;

    int energyDrinkConsumers = TOTAL_CUSTOMERS * PERCENT_ENERGY_DRINKERS;
    int citrusDrinkConsumers = energyDrinkConsumers * PERCENT_CITRUS_DRINKERS;

    cout << "Approximate number of customers purchasing energy drinks per week: " << energyDrinkConsumers << endl;
    cout << "Approximate number of customers preferring citrus-flavored drinks: " << citrusDrinkConsumers << endl;

    return 0;
}