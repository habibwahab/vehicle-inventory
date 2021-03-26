#include <iostream>
#include "../../include/vehicle/Vehicle.h"

Vehicle::Vehicle(std::string registration, int price, std::string make, std::string model, std::string colour, std::string type, bool fuel_type, bool transmission){

    this->registration = registration;
    this->price = price;
    this->make = make;
    this->model = model;
    this->colour = colour;
    this->type = type;
    this->fuel_type = fuel_type;
    this->transmission = transmission;

}

void Vehicle::set_type(std::string type) {
    this->type = type;
}


void Vehicle::set_price(int price) {
    this->price = price;
}

void Vehicle::set_make(std::string make) {
    this->make = make;
}

void Vehicle::set_model(std::string model) {
    this->model = model;
}
void Vehicle::set_colour(std::string colour) {
    this->colour = colour;

}
void Vehicle::set_fuel_type(bool fuel_type) {
    this->fuel_type = fuel_type;

}
void Vehicle::set_transmission(bool transmission) {
    this->transmission = transmission;

}

std::string Vehicle::get_type() {
    return type;
}


std::string Vehicle::get_registration() {
    return registration;
}

int Vehicle::get_price() {
    return price;

}

std::string Vehicle::get_make(){
    return make;

}

std::string Vehicle::get_model() {
    return model;

}

std::string Vehicle::get_colour() {
    return colour;

}

bool Vehicle::get_fuel_type() {
    return fuel_type;

}

bool Vehicle::get_transmission() {
    return transmission;

}

void Vehicle::set_registration(std::string registraton) {
    this->registration = registraton;

}










