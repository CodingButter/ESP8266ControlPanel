#pragma once
#include <Arduino.h>
#include "Element.h"

class Footer : public Element
{
public:
    Footer(String contents) : Element("footer", contents, (Attribute[1]){Attribute{"class", "footer"}}){};
};