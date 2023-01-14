#pragma once
#include <Arduino.h>
#include "Color.h"
#include "Element.h"

class Button : public Element
{
    Button(String text, Attribute *attributes, Color type) : Element("button", text, attributes, (Attribute[1]){Attribute{"class", type}}){};
};