#include <iostream>
#include <string>
#include <vector>
#include "../vehicle/Car.h"
#include <fstream>
#include <ostream>

#ifndef VEHICLE_INVENTORY_INVENTORY_H
#define VEHICLE_INVENTORY_INVENTORY_H

class Inventory {
public:

    Inventory();
    void showAllVehicles();
    void vehicleByReg();
    void vehicleByMake();
    void vehiclebyModel();
    void addVehicle();
    void removeVehicle();
    void updateVehicle();
    void readInventory();
    void saveInventory();

private:
    std::vector <Car *> cars;
};
#endif //VEHICLE_INVENTORY_INVENTORY_H
