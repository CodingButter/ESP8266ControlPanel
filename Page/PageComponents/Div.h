#pragma once
#include <Arduino.h>
#include "Element.h"

class Div : public Element
{
public:
    Div(String contents, Attribute *attributes) : Element("div", contents, attributes){};
};