//
//  GuitarSpec.hpp
//  GuitarStore
//
//  Created by Shubham Sharma on 09/06/23.
//

#ifndef GuitarSpec_hpp
#define GuitarSpec_hpp

#include <stdio.h>
#include <string>

class GuitarSpec
{
public:
    enum class Type
    {
        ACOUSTIC,
        ELECTRIC
    };
    
    enum class Builder
    {
        FENDER,
        MARTIN,
        GIBSON,
        COLLINGS,
        OLSON,
        RYAN,
        PRS,
        ANY
    };
    
    enum class Wood
    {
        INDIAN_ROSEWOOD,
        BRAZILIAN_ROSEWOOD,
        MAHOGONY,
        MAPLE,
        COBOBOLO,
        CEDAR,
        ADIRONDACK,
        ALDER,
        SITKA
    };
    
    std::string GetBuilder() const;
    
    std::string GetBackWood() const;
    
    std::string GetTopWood() const;
    
    std::string GetType() const;
    
    uint16_t GetNumStrings() const;
    
    GuitarSpec(Builder builderInp, Wood backWoodInp, Wood topWoodInp, Type typeInp, uint16_t numStringsInp): builder(builderInp), backWood(backWoodInp), topWood(topWoodInp), type(typeInp), numStrings(numStringsInp){}
    
    bool operator!= (const GuitarSpec& guitarSpec)
    {
        if(this->type != guitarSpec.type)
        {
            return true;
        }
        if(this->builder != guitarSpec.builder)
        {
            return true;
        }
        if(this->numStrings != guitarSpec.numStrings)
        {
            return true;
        }
        if(this->backWood != guitarSpec.backWood)
        {
            return true;
        }
        if(this->topWood != guitarSpec.topWood)
        {
            return true;
        }
        return false;
    }
    
private:
    std::string TypeToString(Type type) const;
    std::string BuilderToString(Builder builder) const;
    std::string WoodToString(Wood wood)const;
    
    Builder builder;
    Wood backWood, topWood;
    Type type;
    uint16_t numStrings;
};

#endif /* GuitarSpec_hpp */
