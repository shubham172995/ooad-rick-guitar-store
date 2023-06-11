//
//  Guitar.hpp
//  GuitarStore
//
//  Created by Shubham Sharma on 08/06/23.
//

#ifndef Guitar_hpp
#define Guitar_hpp

#include <stdio.h>
#include <string>
#include "GuitarSpec.hpp"

class Guitar
{
public:
    
    Guitar(std::string serialNumberInp, std::string modelInp, double priceInp,
           GuitarSpec guitarSpecInp) :
           serialNumber(serialNumberInp), model(modelInp), price(priceInp),
           guitarSpec(guitarSpecInp){}
    
    std::string GetSerialNumber() const;
    
    std::string GetModel() const;
    
    double GetPrice() const;
    
    void SetPrice(double guitarPrice);
    
    GuitarSpec GetGuitarSpec();
    
    bool operator< (const Guitar& guitar)
    {
        return this->GetPrice() < guitar.GetPrice();
    }
    
private:
    
    std::string serialNumber, model;
    double price;
    GuitarSpec guitarSpec;
};

#endif /* Guitar_hpp */
