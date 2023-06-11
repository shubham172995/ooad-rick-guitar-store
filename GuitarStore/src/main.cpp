//
//  main.cpp
//  GuitarStore
//
//  Created by Shubham Sharma on 08/06/23.
//

#include <iostream>
#include "Guitar.hpp"
#include "Inventory.hpp"

int main(int argc, const char * argv[]) {
    GuitarSpec* specs = new GuitarSpec(GuitarSpec::Builder::COLLINGS, GuitarSpec::Wood::INDIAN_ROSEWOOD, GuitarSpec::Wood::BRAZILIAN_ROSEWOOD, GuitarSpec::Type::ELECTRIC, 12);
    Guitar* guitar = new Guitar("1234", "abcd", 123.4, *specs);
    std::cout<<guitar->GetGuitarSpec().GetBackWood()<<std::endl;
    
    
    Inventory inventory;
    GuitarSpec* specs1 = new GuitarSpec(GuitarSpec::Builder::COLLINGS, GuitarSpec::Wood::INDIAN_ROSEWOOD, GuitarSpec::Wood::BRAZILIAN_ROSEWOOD, GuitarSpec::Type::ELECTRIC, 12);
    GuitarSpec* specs2 = new GuitarSpec(GuitarSpec::Builder::COLLINGS, GuitarSpec::Wood::INDIAN_ROSEWOOD, GuitarSpec::Wood::BRAZILIAN_ROSEWOOD, GuitarSpec::Type::ELECTRIC, 6);
    GuitarSpec* specs3 = new GuitarSpec(GuitarSpec::Builder::RYAN, GuitarSpec::Wood::INDIAN_ROSEWOOD, GuitarSpec::Wood::BRAZILIAN_ROSEWOOD, GuitarSpec::Type::ACOUSTIC, 12);
    
    inventory.AddGuitar("1234", "abcd", 123.4, *specs1);
    inventory.AddGuitar("12345", "abcd", 299.99, *specs2);
    inventory.AddGuitar("12346", "abcd", 723.4, *specs3);
    
    Guitar* newGuitar = inventory.GetGuitar("1234");
    std::cout<<newGuitar->GetModel()<<std::endl;
    
    std::list <Guitar*> matchingGuitars;
    matchingGuitars = inventory.Search(*guitar);
    
    if(matchingGuitars.size() != 0)
    {
        std::cout<<"Hey, we found some matching guitars. Check these out\n";
        
        for(auto it : matchingGuitars)
        {
            std::cout<<"We have a "<<it->GetGuitarSpec().GetBuilder()<<" "<<it->GetModel()<<" "<<it->GetGuitarSpec().GetType()<<" guitar:\n"<<it->GetGuitarSpec().GetBackWood()<<" back and sides,\n"<<it->GetGuitarSpec().GetTopWood()<<" top.\n You can have it for only INR"<< it->GetPrice()<<"\n----------------\n";
        }
    }
    return 0;
}
