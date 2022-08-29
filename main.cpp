#include <iostream>
#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"

int main()
{
    Reverse Reverse_object;
    std::cout << Reverse_object.reverseDigit(54561) << std::endl;
    std::cout << Reverse_object.reverseString("Santos") << std::endl;

    Truckloads Truck2;
    std::cout << Truck2.numTrucks(14,4) << std::endl;

    EfficientTruckloads Truck;
    std::cout << Truck.numTrucks(14,3) << std::endl;
}