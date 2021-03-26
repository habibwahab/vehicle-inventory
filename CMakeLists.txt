cmake_minimum_required(VERSION 3.17)
project(vehicle_inventory)

set(CMAKE_CXX_STANDARD 14)

add_executable(vehicle_inventory include src src/authentication src/inventory src/inventory/menu src/vehicle/car src/vehicle src/vehicle/car/Car.cpp include/vehicle/Car.h src/inventory/Inventory.cpp include/inventory/Inventory.h src/authentication/login.cpp include/authentication/login.h src/main.cpp src/vehicle/Vehicle.cpp include/vehicle/Vehicle.h src/inventory/menu/menu.cpp include/inventory/menu.h)

