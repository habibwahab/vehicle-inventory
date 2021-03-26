#include "Vehicle.h"
#ifndef VEHICLE_INVENTORY_CAR_H
#define VEHICLE_INVENTORY_CAR_H


class Car : public Vehicle{
private:
    bool driver_side;
    std::string layout;
public:
    Car(std::string registration, int price, std::string make, std::string model, std::string colour, std::string type, bool fuel_type, bool transmission, bool driver_side, std::string layout);
    void displayVehicleDetails();
    //Getters
    bool get_driver_side();
    std::string get_layout();
    //Setters
    void set_driver_side(bool driver_side);
    void set_layout(std::string layout);

};

#endif //VEHICLE_INVENTORY_CAR_H

