//
//  Inventory.cpp
//  GuitarStore
//
//  Created by Shubham Sharma on 08/06/23.
//

#include "Inventory.hpp"

void Inventory::AddGuitar(std::string serialNumberInp, std::string modelInp, double priceInp, GuitarSpec specs)
{
    Guitar* guitar = new Guitar(serialNumberInp, modelInp, priceInp, specs);
    inventory.insert(guitar);
}

Guitar* Inventory::GetGuitar(std::string serialNumber)
{
    for(auto it : inventory)
    {
        if(it->GetSerialNumber() == serialNumber)
        {
            return it;
        }
    }
    return nullptr;
}

std::list <Guitar*> Inventory::Search(Guitar searchGuitar)
{
    std::list <Guitar*> matchingGuitars;
    for(auto it : inventory)
    {
        std::string model = searchGuitar.GetModel();
        if(model == "" || it->GetModel() != model)
        {
            continue;
        }
        if(it->GetGuitarSpec() != searchGuitar.GetGuitarSpec())
        {
            continue;
        }
        matchingGuitars.push_back(it);
    }
    return matchingGuitars;
}
