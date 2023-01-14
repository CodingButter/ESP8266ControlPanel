#pragma once
#include <Arduino.h>

struct Attribute
{
    String name;
    String value;
    bool operator==(const Attribute &other) const
    {
        return name == other.name;
    };
};