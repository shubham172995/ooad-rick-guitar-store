//
//  GuitarSpec.cpp
//  GuitarStore
//
//  Created by Shubham Sharma on 09/06/23.
//

#include "GuitarSpec.hpp"

std::string GuitarSpec::TypeToString(Type type) const
{
    switch(type)
    {
        case Type::ACOUSTIC:
        {
            return "acoustic";
            break;
        }
        case Type::ELECTRIC:
        {
            return "electric";
            break;
        }
        default:
        {
            return "wrong type";
        }
    }
}

std::string GuitarSpec::BuilderToString(Builder builder) const
{
    switch(builder)
    {
        case Builder::FENDER:
        {
            return "fender";
            break;
        }
        case Builder::MARTIN:
        {
            return "martin";
            break;
        }
        case Builder::GIBSON:
        {
            return "gibson";
            break;
        }
        case Builder::COLLINGS:
        {
            return "collings";
            break;
        }
        case Builder::OLSON:
        {
            return "olson";
            break;
        }
        case Builder::RYAN:
        {
            return "ryan";
            break;
        }
        case Builder::PRS:
        {
            return "prs";
            break;
        }
        case Builder::ANY:
        {
            return "any";
            break;
        }
        default:
        {
            return "wrong type";
        }
    }
}

std::string GuitarSpec::WoodToString(Wood wood) const
{
    switch(wood)
    {
        case Wood::INDIAN_ROSEWOOD:
        {
            return "indian rosewood";
            break;
        }
        case Wood::BRAZILIAN_ROSEWOOD:
        {
            return "brazilian rosewood";
            break;
        }
        case Wood::MAHOGONY:
        {
            return "mahogony";
            break;
        }
        case Wood::MAPLE:
        {
            return "maple";
            break;
        }
        case Wood::COBOBOLO:
        {
            return "cobobolo";
            break;
        }
        case Wood::CEDAR:
        {
            return "cedar";
            break;
        }
        case Wood::ADIRONDACK:
        {
            return "adirondack";
            break;
        }
        case Wood::ALDER:
        {
            return "alder";
            break;
        }
        case Wood::SITKA:
        {
            return "sitka";
            break;
        }
        default:
        {
            return "wrong type";
        }
    }
}

std::string GuitarSpec::GetBuilder() const
{
    return BuilderToString(builder);
}

std::string GuitarSpec::GetBackWood() const
{
    return WoodToString(backWood);
}

std::string GuitarSpec::GetTopWood() const
{
    return WoodToString(topWood);
}

std::string GuitarSpec::GetType() const
{
    return TypeToString(type);
}

uint16_t GuitarSpec::GetNumStrings() const
{
    return numStrings;
}
