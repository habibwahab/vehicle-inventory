#include <string>
#ifndef VEHICLE_INVENTORY_VEHICLE_H
#define VEHICLE_INVENTORY_VEHICLE_H


class Vehicle {

private:
    int price;
    std::string registration, make, model, colour, type;
    bool fuel_type, transmission;

public:

    Vehicle(std::string registration, int price, std::string make, std::string model, std::string colour, std::string type, bool fuel_type, bool transmission);
    virtual void displayVehicleDetails() = 0;

    //Getters

    std::string get_registration();
    int get_price();
    std::string get_make();
    std::string get_model();
    std::string get_colour();
    std::string get_type();
    bool get_fuel_type();
    bool get_transmission();

    //Setters

    void set_registration(std::string registration);
    void set_price(int price);
    void set_make(std::string make);
    void set_model(std::string model);
    void set_colour(std::string colour);
    void set_fuel_type(bool fuel_type);
    void set_transmission(bool set_transmission);
    void set_type(std::string type);


};


#endif //VEHICLE_INVENTORY_VEHICLE_H
