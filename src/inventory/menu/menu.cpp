#include "../../../include/inventory/menu.h"
#include "../../../include/authentication/login.h"
#include "../../../include/inventory/Inventory.h"

void menu() {

    Inventory inventory;

    int choice;

    do {

        std::cout << "----------------------------------------------------------------------------------" << std::endl;
        std::cout << "                          Vehicle Inventory System                                " << std::endl;
        std::cout << "----------------------------------------------------------------------------------" << std::endl;
        std::cout << "| 1. Show all vehicles                                                           |  " << std::endl;
        std::cout << "| 2. Search for vehicle by Registration                                          |  " << std::endl;
        std::cout << "| 3. Search for vehicle by Make                                                  |  " << std::endl;
        std::cout << "| 4. Search for vehicle by Model                                                 |  " << std::endl;
        std::cout << "| 5. Add vehicle                                                                 |  " << std::endl;
        std::cout << "| 6. Update vehicle                                                              |  " << std::endl;
        std::cout << "| 7. Remove vehicle                                                              |  " << std::endl;
        std::cout << "| 8. Exit                                                                        |  " << std::endl;
        std::cout << "----------------------------------------------------------------------------------" << std::endl;

        std::cout << "Please enter a choice 1-8" << std::endl;

        if(std::cin >> choice) {

            if(choice == 1) {
                inventory.showAllVehicles();
            }
            if(choice == 2) {
                inventory.vehicleByReg();
            }
            if(choice == 3) {
                inventory.vehicleByMake();
            }
            if(choice == 4) {
                inventory.vehiclebyModel();
            }
            if(choice == 5) {
                inventory.addVehicle();
                inventory.saveInventory();
            }
            if(choice == 6) {
                inventory.updateVehicle();
                inventory.saveInventory();
            }
            if(choice == 7) {
                inventory.removeVehicle();
                inventory.saveInventory();
            }
        }
        else {
            invalid_input();
        }

    }
    while(choice != 8); {
        if(choice == 8) {
            std::cout << "You have exited." << std::endl;
        }
    }
}

