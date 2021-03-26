#include <iostream>
#include "../../../include/vehicle/Car.h"


void Car::set_driver_side(bool driver_side) {
    this->driver_side = driver_side;
}

void Car::set_layout(std::string layout) {
    this->layout = layout;
}

bool Car::get_driver_side() {
    return driver_side;
}

std::string Car::get_layout() {
    return layout;
}

Car::Car(std::string registration, int price, std::string make, std::string model, std::string colour, std::string type, bool fuel_type, bool transmission, bool driver_side, std::string layout) : Vehicle(registration, price, make, model, colour, type, fuel_type, transmission) {
    this->driver_side = driver_side;
    this->layout = layout;
}

void Car::displayVehicleDetails() {
    std::string trans;
    std::string fuel;
    std::string driversside;

    if(get_fuel_type() == 0) {
        fuel = "Petrol";
    }
    else {
        fuel = "Diesel";
    }

    if(get_transmission() == 0) {
        trans = "Manual";
    }
    else {
        trans = "Automatic";
    }

    if(driver_side == 0 ) {
        driversside = "Right";
    }
    else {
        driversside = "Left";
    }

    std::cout << get_registration() << " " << get_make() << " " << get_model() << " " << get_colour() << " " << trans << " " << fuel << " " << driversside << " " << layout << std::endl;
}




