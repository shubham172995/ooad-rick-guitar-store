//
//  Inventory.hpp
//  GuitarStore
//
//  Created by Shubham Sharma on 08/06/23.
//

#ifndef Inventory_hpp
#define Inventory_hpp

#include <stdio.h>
#include <list>
#include <set>
#include "Guitar.hpp"
#include "GuitarSpec.hpp"

class Inventory
{
public:
    Inventory()
    {
        inventory = {};
    }
    
    void AddGuitar(std::string serialNumberInp, std::string modelInp, double priceInp, GuitarSpec specs);
    
    Guitar* GetGuitar(std::string serialNumber);
    
    std::list <Guitar*> Search(Guitar searchGuitar);
    
private:
    std::set<Guitar*> inventory;
};

#endif /* Inventory_hpp */
