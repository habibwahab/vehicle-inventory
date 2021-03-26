#include "../../include/inventory/Inventory.h"
#include "../../include/authentication/login.h"
#include "../../include/vehicle/Car.h"


Inventory::Inventory() {
    std::vector <Car *> cars;
    readInventory();
}


void Inventory::showAllVehicles() {

    int vehicle_counter = 0;
    for (Car *c : cars) {
        vehicle_counter++;
        c->Car::displayVehicleDetails();
    }
    if(vehicle_counter == 0) {
        std::cout << "There are no vehicles in the system." << std::endl;
    }
    else {
        std::cout << "Total number of vehicles is: " << vehicle_counter << std::endl;
    }
}


void Inventory::vehicleByReg() {

    bool finder = false;
    std::string reg_input;
    std::cout << "Enter the vehicle registration number" << std::endl;
    std::cin >> reg_input;

    for(Car *c : cars) {
        if(c->get_registration() == reg_input) {
            finder = true;
            c->displayVehicleDetails();
        }
        else {
            finder = false;
        }
        }
    if(!finder) {
        std::cout << "No cars found with this registration" << std::endl;
    }
}

void Inventory::vehicleByMake() {

    bool finder = false;
    std::string make_input;
    std::cout << "Enter the vehicle make" << std::endl;
    std::cin >> make_input;

    for(Car *c : cars) {
        if(c->get_make() == make_input) {
            finder = true;
            c->displayVehicleDetails();
        }
        else {
            finder = false;
        }
    }
    if(!finder) {
        std::cout << "No vehicles found with this make" << std::endl;
    }

}
void Inventory::vehiclebyModel() {

    bool finder = false;
    std::string model_input;
    std::cout << "Enter the vehicle model" << std::endl;
    std::cin >> model_input;

    for(Car *c : cars) {
        if(c->get_model() == model_input) {
            finder = true;
            c->displayVehicleDetails();
        }
        else {
            finder = false;
        }
    }
    if(!finder) {
        std::cout << "No vehicles found with this model" << std::endl;
    }

}

void Inventory::addVehicle() {

    while (true) {

        int userinput;
        std::cout << "Would you like to add a car??" << std::endl;
        std::cout << "1. Yes" << std::endl;
        std::cout << "2. No" << std::endl;

        if (std::cin >> userinput) {
            if (userinput == 1) {

                std::string registrationinput;
                std::string existingregistration;

                while(true) {
                    std::cout << "What is the vehicle registration." << std::endl;
                    std::cin>> registrationinput;

                    for(Car *c : cars) {
                        if(registrationinput == c->get_registration()) {
                            std::cout << "Registration is already on the system." << std::endl;
                            existingregistration = c->get_registration();
                        }
                        else if (registrationinput != c->get_registration()) {
                            break;
                        }
                    }
                    if(registrationinput != existingregistration) {
                        break;
                    }
                    else {

                    }
                }

                bool sideinput;
                std::cout << "What side is the steering wheel" << std::endl;
                std::cout << "0. Right" << std::endl;
                std::cout << "1. Left" << std::endl;
                while (true) {
                    if (std::cin >> sideinput) {
                        break;
                    } else {
                        invalid_input();
                    }
                }

                std::string layoutinput;
                std::cout << "Is the car FWD, RWD or AWD?" << std::endl;
                std::cin >> layoutinput;


                std::string makeinput;
                std::cout << "What is the make of the car?" << std::endl;
                std::cin >> makeinput;


                std::string modelinput;
                std::cout << "What is the model of the car?" << std::endl;
                std::cin >> modelinput;


                std::string colourlinput;
                std::cout << "What is the colour of the car?" << std::endl;
                std::cin >> colourlinput;


                bool transmissioninput;
                std::cout << "What transmission is there car?" << std::endl;
                std::cout << "0. Manual" << std::endl;
                std::cout << "1. Automatic" << std::endl;
                while (true) {
                    if (std::cin >> transmissioninput) {
                        break;
                    } else {
                        invalid_input();
                    }
                }

                bool fuelinput;
                std::cout << "What fuel does the car use?" << std::endl;
                std::cout << "0. Petrol" << std::endl;
                std::cout << "1. Diesel" << std::endl;
                while (true) {
                    if (std::cin >> fuelinput) {
                        break;
                    } else {
                        invalid_input();
                    }
                }

                int priceinput;
                std::cout << "What is the price of the car" << std::endl;
                while (true) {
                    if (std::cin >> priceinput) {
                        break;
                    } else {
                        invalid_input();
                        std::cout << "Please enter a number" << std::endl;
                    }

                }
                std::string typeinput = "Car";

                cars.push_back(new Car(registrationinput, priceinput, makeinput, modelinput, colourlinput, typeinput,
                                       fuelinput, transmissioninput, sideinput, layoutinput));

                std::cout << "Vehicle added." << std::endl;
                break;

            } else if (userinput == 2) {
                std::cout << "Returning to menu." << std::endl;
                break;
            }
        } else {
            invalid_input();
        }
    }
}

void Inventory::updateVehicle() {

    std::string registration, make, model, colour, layout, type;
    int price;
    bool fuel_type, transmission, side;

    std::cout << "What is the registration of the vehicle?" << std::endl;
    std::cin >> registration;

    int menuinput;
    std::string existing_registration;

    for (Car *c : cars) {
        if (registration == c->get_registration()) {
            existing_registration = c->get_registration();
            std::cout << "Car found:" << std::endl;
            c->displayVehicleDetails();

            do {

                std::cout << "1.Registration" << std::endl;
                std::cout << "2.Make" << std::endl;
                std::cout << "3.Model" << std::endl;
                std::cout << "4.Colour" << std::endl;
                std::cout << "5.Exit" << std::endl;
                std::cout << "What would you like to change, 1-4, or press 5 to exit." << std::endl;

                if (std::cin >> menuinput) {

                    if (menuinput == 1) {
                        std::string registration_input;
                        std::cout << "Enter the new registration." << std::endl;
                        std::cin >> registration_input;
                        c->set_registration(registration_input);
                        std::cout << "Registration updated" << std::endl;
                    } else if (menuinput == 2) {
                        std::string make_input;
                        std::cout << "Enter the new make" << std::endl;
                        std::cin >> make_input;
                        c->set_make(make_input);
                        std::cout << "Make updated" << std::endl;
                    } else if (menuinput == 3) {
                        std::string model_input;
                        std::cout << "Enter the new model" << std::endl;
                        std::cin >> model_input;
                        c->set_model(model_input);
                        std::cout << "Model updated" << std::endl;
                    } else if (menuinput == 4) {
                        std::string colour_input;
                        std::cout << "Enter the new colour" << std::endl;
                        std::cin >> colour_input;
                        c->set_colour(colour_input);
                        std::cout << "Colour updated" << std::endl;
                    }

                } else {
                    invalid_input();
                }
            } while (menuinput != 5); {
                std::cout << "Returning to main menu." << std::endl;
            }
        }
        else if(registration != existing_registration) {
            break;
        }
    }
    if(registration != existing_registration) {
        std::cout << "Registration does not exist" << std::endl;
    }
}



void Inventory::removeVehicle() {

    std::string registration;
    std::string existing_registration;
    std::cout << "What is the registration of the vehicle?" << std::endl;
    std::cin >> registration;

    for(Car *c : cars) {
        if(registration == c->get_registration()) {
            existing_registration = c->get_registration();
            c->displayVehicleDetails();
            delete c;
            cars.clear();
            std::cout << "Vehicle successfully deleted" << std::endl;
        }
        else {
        }
    }
    if(registration != existing_registration) {
        std::cout << "No vehicles matching this registration found" << std::endl;
    }
}

void Inventory::readInventory() {


    std::ifstream inventoryRead("inventory.csv");
    if(inventoryRead.is_open()) {

        std::string registration, make, model, colour, layout, type;
        int price;
        bool fuel_type, transmission, side;
        while(inventoryRead >> registration >> price >> make >> model >> colour >> type >> fuel_type >> transmission >> side >> layout) {
            cars.push_back(new Car(registration, price, make, model, colour, type, fuel_type, transmission, side, layout));
        }
    }
    else {
        std::cout << "Inventory is empty." << std::endl;

    }


}

void Inventory::saveInventory() {

    std::ofstream inventoryWrite("inventory.csv");
    if(inventoryWrite.is_open())
    {
        for (Car *c : cars) {
            inventoryWrite << c->get_registration() << " " << c->get_price() << " " << c->get_make() << " " << c->get_model()
            << " " << c->get_colour() << " " << c->get_type() << " " << c->get_fuel_type() << " " << c->get_transmission() << " " << c->get_driver_side() << " " << c->get_layout() << std::endl;
        }
    }
    else {
        std::cout << "Failed" << std::endl;
    }
}

