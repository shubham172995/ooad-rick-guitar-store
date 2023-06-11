//
//  Guitar.cpp
//  GuitarStore
//
//  Created by Shubham Sharma on 08/06/23.
//

#include "Guitar.hpp"

std::string Guitar::GetSerialNumber() const
{
    return serialNumber;
}

std::string Guitar::GetModel() const
{
    return model;
}

double Guitar::GetPrice() const
{
    return price;
}

void Guitar::SetPrice(double guitarPrice)
{
    price = guitarPrice;
}

GuitarSpec Guitar::GetGuitarSpec()
{
    return guitarSpec;
}
